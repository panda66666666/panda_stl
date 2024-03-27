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

}

#endif //MYPROJECT_UTIL_H
