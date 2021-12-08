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

func_(fixed_cos_test)
{
    let l_start = -6.28318530718;
    let l_end = 6.28318530718;
    let l_step_count = 320;
    let l_delta = (l_end - l_start) / l_step_count;

    let l_current_step = 0;
    while (l_current_step < l_step_count)
    {
        let l_current_value = l_start + (l_delta * l_current_step);
        let l_angle = fangle32{fixed<7, Int32>::make_s(num(l_current_value))};
        let l_cos = *trig::cos(l_angle).thiz.to_f64().num_value();
        assert(abs(l_cos - cos(l_current_value)) <= 0.025); // Having a better accuracy ?
        l_current_step += 1;
    }
    /*
    // TODO -> do the same for multiple values
    let l_angle = fangle32{fixed<7, Int32>::make_s(num(1.00))};
    let l_cos = trig::cos(fangle32{fixed<7, Int32>::make_s(num(1.00))});
    assert(abs(*l_cos.thiz.to_f64().num_value() - cos(1.0f)) <= 0.01);
    */
};

void main()
{
    fixed_operation_test<fixed<16, Int32>>();
    fixed_operation_test<fixed<24, Int32>>();
    fixed_cos_test();
};

}; // namespace math_test