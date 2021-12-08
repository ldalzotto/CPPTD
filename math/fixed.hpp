#pragma once

#include <core/core.hpp>

template <i8 _FractionalPrecision, class _Num> struct fixed
{
    static_assert(_FractionalPrecision <= (sizeof(_Num) * 8));

    using type_higher_numeric = typename _Num::type_higher_numeric;
    _Num _number;

    func_s_(constexpr __force_inline scale)
    {
        return _FractionalPrecision;
    };

    func_t(constexpr __force_inline make, p_number)
    {
        _number = (p_number * num(1 << scale()));
    };

    func_s_t(constexpr __force_inline make_s, p_number)
    {
        fixed thiz;
        thiz.make(p_number);
        return thiz;
    };

    func_(constexpr __force_inline num_value)
    {
        return _number.num_value();
    };

    func_(constexpr __force_inline to_f64)
    {
        return num<f64>(*num_value()) / num(1 << scale());
    };

    func_s_(constexpr __force_inline epsilon)
    {
        return fixed{1};
    };

    template <i8 _Scale> auto set_scale()
    {
        constexpr let l_delta = _FractionalPrecision - _Scale;
        if constexpr (l_delta > 0)
        {
            return fixed<_Scale, _Num>{*_number.num_value() >> l_delta};
        }
        else
        {
            return fixed<_Scale, _Num>{*_number.num_value() << -l_delta};
        }
    };

    template <i8 _ScaleDelta> auto add_whole()
    {
        return fixed<_FractionalPrecision - _ScaleDelta, _Num>{_number};
    };
    template <i8 _ScaleDelta> auto add_fraction()
    {
        return fixed<_FractionalPrecision + _ScaleDelta, _Num>{_number};
    };

    func_t(constexpr __force_inline operator+, p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number + p_other._number};
    };

    func_t(constexpr __force_inline operator-, p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number - p_other._number};
    };

    func_t(constexpr __force_inline operator*, p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{*(num<type_higher_numeric>(*num_value()) * num<type_higher_numeric>(*p_other.num_value())).num_value() >> scale()};
        // return fixed{num<_Num>(num<uimax>(_number._number) * num(p_other._number._number >> scale()))};
    };

    func_t(constexpr __force_inline operator/, p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{num(((type_higher_numeric)*num_value()) << scale()) / p_other._number};
        // return fixed{(_Num)(((uimax)_number << scale()) / p_other._number)};
    };

    func_t(constexpr __force_inline operator<, p_other)
    {
        __check_scale_match(*this, p_other);
        return _number < p_other._number;
    };

    func_t(constexpr __force_inline operator<=, p_other)
    {
        __check_scale_match(*this, p_other);
        return _number <= p_other._number;
    };

    func_t(constexpr __force_inline operator>, p_other)
    {
        __check_scale_match(*this, p_other);
        return _number > p_other._number;
    };

    func_t(constexpr __force_inline operator>=, p_other)
    {
        __check_scale_match(*this, p_other);
        return _number >= p_other._number;
    };

    func_t(constexpr __force_inline operator%, p_other)
    {
        __check_scale_match(*this, p_other);
        return fixed{_number % p_other._number};
    };

    func_(constexpr __force_inline abs)
    {
        return _number.abs();
    };

  private:
    func_s_tt(__check_scale_match, p_left, p_right)
    {
        assert_constexpr<p_left.scale() == p_right.scale()>();
    };
};

#define fixed_override(thisTypeName, otherTypeName)                                                                                                                                                    \
    thisTypeName constexpr __force_inline operator+(otherTypeName p_other)                                                                                                                             \
    {                                                                                                                                                                                                  \
        return thisTypeName{thiz + p_other.thiz};                                                                                                                                                      \
    };                                                                                                                                                                                                 \
                                                                                                                                                                                                       \
    thisTypeName constexpr __force_inline operator-(otherTypeName p_other)                                                                                                                             \
    {                                                                                                                                                                                                  \
        return thisTypeName{thiz - p_other.thiz};                                                                                                                                                      \
    };                                                                                                                                                                                                 \
                                                                                                                                                                                                       \
    thisTypeName constexpr __force_inline operator*(otherTypeName p_other)                                                                                                                             \
    {                                                                                                                                                                                                  \
        return thisTypeName{thiz * p_other.thiz};                                                                                                                                                      \
    };                                                                                                                                                                                                 \
                                                                                                                                                                                                       \
    thisTypeName constexpr __force_inline operator/(otherTypeName p_other)                                                                                                                             \
    {                                                                                                                                                                                                  \
        return thisTypeName{thiz / p_other.thiz};                                                                                                                                                      \
    };                                                                                                                                                                                                 \
                                                                                                                                                                                                       \
    thisTypeName constexpr __force_inline operator%(otherTypeName p_other)                                                                                                                             \
    {                                                                                                                                                                                                  \
        return thisTypeName{thiz % p_other.thiz};                                                                                                                                                      \
    };                                                                                                                                                                                                 \
                                                                                                                                                                                                       \
    auto constexpr __force_inline operator<(otherTypeName p_other)                                                                                                                                     \
    {                                                                                                                                                                                                  \
        return thiz < p_other.thiz;                                                                                                                                                                    \
    };                                                                                                                                                                                                 \
    auto constexpr __force_inline operator<=(otherTypeName p_other)                                                                                                                                    \
    {                                                                                                                                                                                                  \
        return thiz <= p_other.thiz;                                                                                                                                                                   \
    };                                                                                                                                                                                                 \
    auto constexpr __force_inline operator>(otherTypeName p_other)                                                                                                                                     \
    {                                                                                                                                                                                                  \
        return thiz > p_other.thiz;                                                                                                                                                                    \
    };                                                                                                                                                                                                 \
    auto constexpr __force_inline operator>=(otherTypeName p_other)                                                                                                                                    \
    {                                                                                                                                                                                                  \
        return thiz >= p_other.thiz;                                                                                                                                                                   \
    };

#define fixed_make(thisTypeName, otherTypeName)                                                                                                                                                        \
    func_s_t(constexpr __force_inline make_##otherTypeName##_s, p_other)                                                                                                                               \
    {                                                                                                                                                                                                  \
        return thisTypeName{p_other.thiz.template set_scale<_SCALE>()};                                                                                                                                \
    }

#define fixed_declare(name, _Scale, _NumberType)                                                                                                                                                       \
    struct name                                                                                                                                                                                        \
    {                                                                                                                                                                                                  \
        constexpr auto static _SCALE = _Scale;                                                                                                                                                         \
        using type_fixed = fixed<_SCALE, _NumberType>;                                                                                                                                                 \
        type_fixed thiz;                                                                                                                                                                               \
        func_s_t(constexpr __force_inline make_s, p_number)                                                                                                                                            \
        {                                                                                                                                                                                              \
            return name{type_fixed::make_s(p_number)};                                                                                                                                                 \
        };                                                                                                                                                                                             \
        func_(constexpr __force_inline abs)                                                                                                                                                            \
        {                                                                                                                                                                                              \
            return name{thiz.abs()};                                                                                                                                                                   \
        };                                                                                                                                                                                             \
        fixed_override(name, name)

#define fixed_end() }