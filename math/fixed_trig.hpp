#pragma once

#include "fixed.hpp"

fixed_declare(fangle32, 7, Int32);
fixed_end();

fixed_declare(funit32, 30, Int32);
fixed_end();

fixed_declare(ftan32, 20, Int32);
fixed_end();

fixed_make(fangle32, funit32);
fixed_make(funit32, ftan32);
fixed_make(ftan32, fangle32);

namespace trig
{
auto cos(fangle32 p_angle)
{
    using type_unit = funit32;
    using type_angle = decltype(p_angle);

    static let l_pi = type_angle::m_pi();
    static let l_2pi = type_angle::m_2_pi();
    static let l_pi_over_2 = type_angle::m_pi_2();
    let l_angle = (p_angle % l_2pi).abs();

    let l_negation_factor = type_angle::make_s(num(1));
    /*
    let l_sup_to_pi = (l_angle > l_pi);
    l_angle = l_angle - (type_angle::make_s(num(l_sup_to_pi)) * l_pi * type_angle::make_s(num(-1)));
    let l_negation_factor = type_angle::make_s(num(1)) * type_angle::make_s(num((l_sup_to_pi * -2) + 1));
    */
    // TODO -> move this to delta ?
    if (l_angle > l_pi)
    {
        l_angle = (l_angle - l_pi);
        l_negation_factor = l_negation_factor * type_angle::make_s(num(-1));
    }

    // MAP when > pi/2
    if (l_angle > l_pi_over_2)
    {
        l_angle = (l_pi - l_angle);
        l_negation_factor = l_negation_factor * type_angle::make_s(num(-1));
    }

    let l_angle_2 = l_angle * l_angle;
    let l_angle_4 = l_angle_2 * l_angle_2;

    let l_x0 = type_angle::make_s(num(1));
    let l_x1 = (l_angle_2 / type_angle::make_s(num(2)));
    let l_x2 = (l_angle_4 / type_angle::make_s(num(24)));

    let l_unit_poly = l_x0 - l_x1 + l_x2;
    l_unit_poly = l_unit_poly * l_negation_factor;

    return fixed_convert_s<type_angle, type_unit>(l_unit_poly);
};

auto sin(fangle32 p_angle)
{
    return cos(p_angle - fangle32::m_pi_2());
};

auto tan(fangle32 p_angle)
{
    return fixed_convert_s<funit32, ftan32>(sin(p_angle) / cos(p_angle));
};

auto atan(ftan32 p_tan)
{
    using type_tan = decltype(p_tan);
    using type_angle = fangle32;

    let l_x0 = p_tan * type_tan::make_s(num(0.97239411f));
    let l_x1 = (p_tan * p_tan * p_tan) * type_tan::make_s(num(0.19194795f));
    return fixed_convert_s<type_tan, type_angle>(l_x0 - l_x1);
};

// TODO -> make this with masked condition for simd ?
auto atan2(ftan32 p_tan_y, ftan32 p_tan_x)
{
    using type_tan = decltype(p_tan_y);
    using type_angle = fangle32;

    let l_tan_zero = type_tan::make_s(num(0.0f));
    if (p_tan_x != l_tan_zero)
    {
        if (p_tan_x.abs() > p_tan_y.abs())
        {
            let l_z = p_tan_y / p_tan_x;
            if (p_tan_x > l_tan_zero)
            {
                // atan2(y,x) = atan(y/x) if x > 0
                return atan(l_z);
            }
            else if (p_tan_y >= l_tan_zero)
            {
                // atan2(y,x) = atan(y/x) + PI if x < 0, y >= 0
                return atan(l_z) + type_angle::m_pi();
            }
            else
            {
                // atan2(y,x) = atan(y/x) - PI if x < 0, y < 0
                return atan(l_z) - type_angle::m_pi();
            }
        }
        else // Use property atan(y/x) = PI/2 - atan(x/y) if |y/x| > 1.
        {
            let l_z = p_tan_x / p_tan_y;
            if (p_tan_y > l_tan_zero)
            {
                // atan2(y,x) = PI/2 - atan(x/y) if |y/x| > 1, y > 0
                return type_angle::make_s(num(-1)) * atan(l_z) + type_angle::m_pi_2();
            }
            else
            {
                // atan2(y,x) = -PI/2 - atan(x/y) if |y/x| > 1, y < 0
                return type_angle::make_s(num(-1)) * atan(l_z) - type_angle::m_pi_2();
            }
        }
    }
    else
    {
        if (p_tan_y > l_tan_zero) // x = 0, y > 0
        {
            return type_angle::m_pi_2();
        }
        else if (p_tan_y < l_tan_zero) // x = 0, y < 0
        {
            return type_angle::make_s(num(-1)) * type_angle::m_pi_2();
        }
    }
    return type_angle::make_s(num(0.0f)); // x,y = 0. Could return NaN instead.
}

}; // namespace trig