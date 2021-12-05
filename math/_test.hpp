#pragma once

#include "fixed.hpp"
#include "fixed_trig.hpp"

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

void main()
{
    fixed_operation_test<fixed<16, 16, Int32>>();
    fixed_operation_test<fixed<8, 24, Int32>>();
};

}; // namespace math_test