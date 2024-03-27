//
// Created by Hi on 2024/3/27.
//

#ifndef MYPROJECT_CONSTRUCTOR_H
#define MYPROJECT_CONSTRUCTOR_H

#include "util.h"

namespace panda_stl
{
    template<typename T>
    class Constructor
    {
    private:
        using value_type = T;
    public:
        static void construct(T *ptr);

        static void construct(T *ptr, T &&rhs);

        template<typename... Args>
        static void construct(T *ptr, Args &&...args);

        static void destroy_one(T *ptr);

        //后续补充迭代器的
    };

    template<typename T>
    void Constructor<T>::construct(T *ptr)
    {
        ::new((void *) ptr) T();
    }

    template<typename T>
    void Constructor<T>::construct(T *ptr, T &&rhs)
    {
        ::new((void *) ptr) T(rhs);
    }

    template<typename T>
    template<typename... Args>
    void Constructor<T>::construct(T *ptr, Args &&... args)
    {
        ::new((void *) ptr) T(panda_stl::forward<Args>(args)...);
    }

    template<typename T>
    void Constructor<T>::destroy_one(T *ptr)
    {
        if (!ptr) ptr->~T();
    }


}

#endif //MYPROJECT_CONSTRUCTOR_H
