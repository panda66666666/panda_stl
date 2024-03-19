#pragma once

#include <initializer_list>

#include "iterator.h"
#include "memory.h"
#include "util.h"
#include "exceptdef.h"
#include <cstddef>
#include "allocator.h"
// #include "algo.h"

namespace panda_stl
{
    template <typename T>
    class vector
    {
        // 成员变量
    public:
        typedef panda_stl::allocator<T> allocator_type;
        typedef typename allocator_type::value_type value_type;
        typedef typename allocator_type::size_type size_type;
        typedef value_type *iterator;

    private:
        iterator begin_;
        iterator end_;
        iterator cap_;
        // 构造函数
    public:
        vector() noexcept;
        // explicit vector(int n);
        explicit vector(size_type n);

        explicit vector(size_type n, const value_type &value);

        template <typename Iter, typename std::enable_if<panda_stl::is_input_iterator<Iter>::value, int>::type = 0>
        explicit vector(Iter begin, Iter end);

        vector(const vector &rhs);

        vector(vector &&rhs) noexcept;

    private:
        // 定义方法
    };

    template <typename T>
    inline vector<T>::vector(size_type n)
    {
        return;
    }

    template <typename T>
    inline vector<T>::vector(size_type n, const value_type &value)
    {
    }

    template <typename T>
    template <typename Iter, typename std::enable_if<panda_stl::is_input_iterator<Iter>::value, int>::type>
    inline vector<T>::vector(Iter begin, Iter end)
    {
    }

    template <typename T>
    inline vector<T>::vector(const vector &rhs)
    {

    }

    template <typename T>
    inline vector<T>::vector(vector &&rhs) noexcept
    {
        
    }

} // end namespace stl
