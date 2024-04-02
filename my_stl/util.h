//
// Created by Hi on 2024/3/27.
//

#ifndef MYPROJECT_UTIL_H
#define MYPROJECT_UTIL_H

#include <cstddef>

#include "type_traits.h"

namespace panda_stl
{

    template<class T>
    T &&forward(typename std::remove_reference<T>::type &&arg) noexcept
    {
        static_assert(!std::is_lvalue_reference<T>::value, "bad forward");
        return static_cast<T &&>(arg);
    }

    template <class T>
    const T& max(const T& lhs, const T& rhs)
    {
        return lhs < rhs ? rhs : lhs;
    }

// 重载版本使用函数对象 comp 代替比较操作
    template <class T, class Compare>
    const T& max(const T& lhs, const T& rhs, Compare comp)
    {
        return comp(lhs, rhs) ? rhs : lhs;
    }

}

#endif //MYPROJECT_UTIL_H
