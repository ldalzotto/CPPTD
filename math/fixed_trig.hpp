#pragma once

#include "fixed.hpp"

fixed_declare(fangle32, 7, Int32);
fixed_end();

fixed_declare(funit32, 30, Int32);
fixed_make(funit32, fangle32);
fixed_end();

namespace trig
{
/*
auto cos(fangle32 p_angle)
{
    using type_angle = decltype(p_angle);
    // TODO -> Having PI macros
    let l_pi = type_angle::make_s(num(3.141592));
    let l_angle = (p_angle % l_pi).abs();

    // TODO PI/2 mapping and PI/4 mapping

    let l_angle_2 = l_angle * l_angle;
    let l_angle_4 = l_angle_2 * l_angle_2;
    let l_x0 = type_angle::make_s(num(1));
    let l_x1 = (l_angle_2 / type_angle::make_s(num(2)));
    let l_x2 = (l_angle_4 / type_angle::make_s(num(24)));
    let l_unit_poly = l_x0 - l_x1 + l_x2;
    // TODO -> remove the type in the function name
    return funit32::make_fangle32_s(l_unit_poly);
};
*/

auto cos(fangle32 p_angle)
{
    using type_angle = decltype(p_angle);
    // TODO -> Having PI macros
    let l_pi = type_angle::make_s(num(3.141592));
    let l_2pi = type_angle::make_s(num(3.141592 * 2));
    let l_pi_over_2 = type_angle::make_s(num(3.141592 / 2));
    let l_angle = (p_angle % l_2pi).abs();

    // TODO -> move this to delta ?
    let l_negation_factor = type_angle::make_s(num(1));
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
    // let l_angle_6 = l_angle_4 * l_angle_4;
    let l_x0 = type_angle::make_s(num(1));
    let l_x1 = (l_angle_2 / type_angle::make_s(num(2)));
    let l_x2 = (l_angle_4 / type_angle::make_s(num(24)));
    // let l_x3 = (l_angle_6 / type_angle::make_s(num(720)));
    let l_unit_poly = l_x0 - l_x1 + l_x2;
    l_unit_poly = l_unit_poly * l_negation_factor;
    // TODO -> remove the type in the function name
    return funit32::make_fangle32_s(l_unit_poly);
};
}; // namespace trig