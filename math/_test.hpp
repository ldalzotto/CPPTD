#pragma once

#include "fixed.hpp"
#include "fixed_trig.hpp"
#include <math.h>

namespace math_test
{

func_h_(fixed_operation_test)
{
    constexpr f64 TOL = 0.001;
    using type_fixed = _P0;

    // fixed building
    {
        let l_original = num(10.42);
        let l_number = type_fixed::make_s(l_original);
        let l_retrieved = l_number.to_f64();
        assert(abs(*(l_original - l_retrieved).num_value()) <= TOL);
    }

    // fixed add
    {
        let l_number = type_fixed::make_s(num(10.42));
        let l_result = l_number + l_number;
        assert(abs(*l_result.to_f64().num_value() - (10.42 * 2)) <= TOL);
    }

    // fixed sub
    {
        let l_number_0 = type_fixed::make_s(num(10.42));
        let l_number_1 = type_fixed::make_s(num(-1.42));
        let l_result = l_number_0 - l_number_1;
        assert(abs(*l_result.to_f64().num_value() - (10.42 + 1.42)) <= TOL);
    }

    // fixed mul
    {
        let l_number_0 = type_fixed::make_s(num(10.42));
        let l_number_1 = type_fixed::make_s(num(-2.42));
        let l_result = (l_number_0 * l_number_1).to_f64();
        assert(abs(*l_result.num_value() - (10.42 * -2.42)) <= TOL);
    }

    // fixed div
    {
        let l_number_0 = type_fixed::make_s(num(10.42));
        let l_number_1 = type_fixed::make_s(num(-2.42));
        let l_result = (l_number_0 / l_number_1).to_f64();
        assert(abs(*l_result.num_value() - (10.42 / -2.42)) <= TOL);
    }
};

// Ensuring that cos doesn't loss precision
func_(fixed_cos_test_accuracy)
{
    let l_step_count = 200;
    let l_angle = fangle32::make_s(num(-94.274513));
    let l_reference = trig::cos(l_angle);
    for (loop_range(i, 0, l_step_count))
    {
        let l_new_angle = l_angle + (fangle32::m_2_pi() * fangle32::make_s(num(i)));
        let l_result = trig::cos(l_new_angle);
        assert(l_reference == l_result);
    }
}

// TODO -> Having a way to quickly test compare ?

// Ensuring that cos matches real value
func_(fixed_cos_test)
{
    let l_start = fangle32::m_2_pi() * fangle32::make_s(num(-1 * 10));
    let l_end = fangle32::m_2_pi() * fangle32::make_s(num(10));
    let l_step_count = num(320);

    let l_start_double = num(-6.28318530718 * 10);
    let l_end_double = num(6.28318530718 * 10);
    let l_delta_double = (l_end_double - l_start_double) / l_step_count;

    let l_delta = (l_end - l_start) / fangle32::make_s(l_step_count);

    let l_current_step = num(0);
    while (l_current_step < l_step_count)
    {
        let l_current_value = l_start + (l_delta * fangle32::make_s(l_current_step));
        let l_current_value_double = l_start_double + (l_delta_double * l_current_step);
        let l_cos = *trig::cos(l_current_value).to_f64().num_value();
        let l_real_cos = ::cos(*l_current_value_double.num_value());
        assert(abs(abs(l_cos) - abs(l_real_cos)) <= 0.05);
        l_current_step += num(1);
    }
};

func_(fixed_tan_test)
{
#if 0
#endif
    // very precise between -1 and 1
    {
        let l_step_count = num(32);
        let l_start = fangle32::make_s(num(-1));
        let l_end = fangle32::make_s(num(1));
        let l_delta = (l_end - l_start) / fangle32::make_s(l_step_count);

        let l_start_double = num(-1);
        let l_end_double = num(1);

        let l_delta_double = (l_end_double - l_start_double) / l_step_count;

        let l_current_step = num(0);
        while (l_current_step < l_step_count)
        {
            let l_current_value = l_start + (l_delta * fangle32::make_s(l_current_step));
            let l_current_value_double = l_start_double + (l_delta_double * l_current_step);

            let l_cos = *trig::tan(l_current_value).to_f64().num_value();
            let l_real_cos = ::tan(*l_current_value_double.num_value());
            let l_diff = abs(abs(l_cos) - abs(l_real_cos));
            assert(l_diff <= 0.15);
            l_current_step += num(1);
        }
    }
    // less precise between -1.4 and 1.4
    {
        let l_step_count = num(32);
        let l_start = fangle32::make_s(num(-1.4));
        let l_end = fangle32::make_s(num(1.4));
        let l_delta = (l_end - l_start) / fangle32::make_s(l_step_count);

        let l_start_double = num(-1.4);
        let l_end_double = num(1.4);

        let l_delta_double = (l_end_double - l_start_double) / l_step_count;

        let l_current_step = num(0);
        while (l_current_step < l_step_count)
        {
            let l_current_value = l_start + (l_delta * fangle32::make_s(l_current_step));
            let l_current_value_double = l_start_double + (l_delta_double * l_current_step);

            let l_cos = *trig::tan(l_current_value).to_f64().num_value();
            let l_real_cos = ::tan(*l_current_value_double.num_value());
            assert(abs(abs(l_cos) - abs(l_real_cos)) <= 4.4); // TODO -> having better acuracy on the tan out of -1,1 ?
            l_current_step += num(1);
        }
    }
};

// TODO -> write test
func_(fixed_atan2_test)
{
    using type_tan = ftan32;
    let l_step_count = num(320);
    {
        let l_start_x = type_tan::make_s(num(-1));
        let l_end_x = type_tan::make_s(num(1));
        let l_delta_x = (l_end_x - l_start_x) / type_tan::make_s(l_step_count);

        let l_start_double_x = num(-1);
        let l_end_double_x = num(1);
        let l_delta_double_x = (l_end_double_x - l_start_double_x) / l_step_count;

        let l_current_step_x = num(0);
        while (l_current_step_x < l_step_count)
        {
            let l_current_value_x = l_start_x + (l_delta_x * type_tan::make_s(l_current_step_x));
            // TODO -> there is a problem here
            let l_current_value_double_x = l_start_double_x + (l_delta_double_x * l_current_step_x);

            {
                let l_start_y = type_tan::make_s(num(-1));
                let l_end_y = type_tan::make_s(num(1));
                let l_delta_y = (l_end_y - l_start_y) / type_tan::make_s(l_step_count);

                let l_start_double_y = num(-1);
                let l_end_double_y = num(1);
                let l_delta_double_y = (l_end_double_y - l_start_double_y) / l_step_count;

                let l_current_step_y = num(0);
                while (l_current_step_y < l_step_count)
                {
                    let l_current_value_y = l_start_y + (l_delta_y * type_tan::make_s(l_current_step_y));
                    // TODO -> there is a problem here
                    let l_current_value_double_y = l_start_double_y + (l_delta_double_y * l_current_step_y);

                    let l_cos = *trig::atan2(l_current_value_x, l_current_value_y).to_f64().num_value();
                    let l_real_cos = ::atan2(*l_current_value_double_x.num_value(), *l_current_value_double_y.num_value());
                    assert(abs(abs(l_cos) - abs(l_real_cos)) <= 0.3);

                    l_current_step_y += num(1);
                }
            }

            l_current_step_x += num(1);
        }
    }

    /*
        let l_x = ftan32::make_s(num(1.0));
        let l_y = ftan32::make_s(num(2.0));
        let l_value = trig::atan2(l_x, l_y);
        let l_vvalue = *l_value.to_f64().num_value();
        let zefef = 10;
        */
};

void main()
{
    let l_x = num(1);
    let l_y = num(2);
    let l_value = l_x / l_y;
    fixed_operation_test<fixed<16, Int32>>();
    fixed_operation_test<fixed<24, Int32>>();
    fixed_cos_test();
    fixed_cos_test_accuracy();
    fixed_tan_test();
    fixed_atan2_test();
};

}; // namespace math_test
