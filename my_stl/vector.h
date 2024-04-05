//
// Created by Hi on 2024/3/28.
//

#ifndef MYPROJECT_VECTOR_H
#define MYPROJECT_VECTOR_H

#include "allocator.h"
#include "constructor.h"
#include "util.h"

namespace panda_stl
{
    template<typename T>
    class Vector
    {
    private:
        using allocator = Allocator<T>;
        using constructor = Constructor<T>;
        using value_type = typename Allocator<T>::value_type;

        T *begin_ptr = nullptr;
        T *end_ptr = nullptr;
        T *cap_ptr = nullptr;

    public:
        Vector();

        explicit Vector(size_t n);

        Vector(size_t n, const value_type &value);

        Vector(const Vector &rhs);

        Vector(Vector &&rhs) noexcept;

        ~Vector();

    private:
        void _try_init();

        void _fill_init(size_t size);

    public:
//        template<class ...Args>
//        void emplace_back(Args &&...args);
//
//        void push_back(const value_type &value);


    };

    template<typename T>
    void Vector<T>::_fill_init(size_t size)
    {
        const size_t init_size = panda_stl::max((size_t) 16, size);
        // 申请内存
        try {
            begin_ptr = allocator::allocate()
        } catch (...) {

        }
    }

    template<typename T>
    void Vector<T>::_try_init()
    {
        try {
            end_ptr = begin_ptr = allocator::allocate((size_t) 16);
            cap_ptr = begin_ptr + (size_t) 16;
        } catch (...) {
            cap_ptr = end_ptr = begin_ptr = nullptr;
        }
    }

    template<typename T>
    Vector<T>::Vector()
    {
        _try_init();
    }

    template<typename T>
    Vector<T>::Vector(size_t n)
    {

    }

    template<typename T>
    Vector<T>::Vector(size_t n, const value_type &value)
    {

    }

    template<typename T>
    Vector<T>::Vector(const Vector &rhs)
    {

    }

    template<typename T>
    Vector<T>::Vector(Vector &&rhs) noexcept
    {

    }

    template<typename T>
    Vector<T>::~Vector()
    {

    }
}


#endif //MYPROJECT_VECTOR_H
