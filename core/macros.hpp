#pragma once

#define let auto

#define func_(p_name) auto p_name()
#define func_t(p_name, p_0) template <class _P0> auto p_name(_P0 p_0)
#define func_b(p_name) template <bool _P0> auto p_name()
#define func_tt(p_name, p_0, p_1) template <class _P0, class _P1> auto p_name(_P0 p_0, _P1 p_1)
#define func_ttt(p_name, p_0, p_1, p_2) template <class _P0, class _P1, class _P2> auto p_name(_P0 p_0, _P1 p_1, _P2 p_2)
#define func_tttt(p_name, p_0, p_1, p_2, p_3) template <class _P0, class _P1, class _P2, class _P3> auto p_name(_P0 p_0, _P1 p_1, _P2 p_2, _P3 p_3)

#define func_s_(p_name) static auto p_name()
#define func_s_t(p_name, p_0) template <class _P0> static auto p_name(_P0 p_0)
#define func_s_tt(p_name, p_0, p_1) template <class _P0, class _P1> static auto p_name(_P0 p_0, _P1 p_1)

#define func_wto_t(p_name, p_to, p_0)                                                                                                                                                                  \
    template <class _P0> auto __force_inline p_name(_P0 p_0)                                                                                                                                           \
    {                                                                                                                                                                                                  \
        return (p_to)->p_name(p_0);                                                                                                                                                                    \
    }

#define func_wto_tt(p_name, p_to, p_0, p_1)                                                                                                                                                            \
    template <class _P0, class _P1, class _P2> auto __force_inline p_name(_P0 p_0, _P1 p_1)                                                                                                            \
    {                                                                                                                                                                                                  \
        return (p_to)->p_name(p_0, p_1);                                                                                                                                                               \
    }

#define func_wto_ttt(p_name, p_to, p_0, p_1, p_2)                                                                                                                                                      \
    template <class _P0, class _P1, class _P2> auto __force_inline p_name(_P0 p_0, _P1 p_1, _P2 p_2)                                                                                                   \
    {                                                                                                                                                                                                  \
        return (p_to)->p_name(p_0, p_1, p_2);                                                                                                                                                          \
    }

#define func_w_t(p_name, p_0) func_wto_t(p_name, p_0)

#define func_w_tt(p_name, p_0, p_1) func_wto_tt(p_name, thiz, p_0, p_1)
#define func_w_ttt(p_name, p_0, p_1, p_2) func_wto_ttt(p_name, thiz, p_0, p_1, p_2)

#define loop_iter_begin(index_var_name, p_begin, p_container_var_name)                                                                                                                                 \
    let(index_var_name) = (p_begin);                                                                                                                                                                   \
    (index_var_name) < (p_container_var_name)->size();                                                                                                                                                 \
    (index_var_name)++

#define loop_iter(index_var_name, p_container_var_name) loop_iter_begin(index_var_name, 0, p_container_var_name)

#define loop_range(index_var_name, min, max)                                                                                                                                                           \
    let(index_var_name) = (min);                                                                                                                                                                       \
    i < (max);                                                                                                                                                                                         \
    i++