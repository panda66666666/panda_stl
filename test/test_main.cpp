#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include"vector.h"

template <class T, T v>
struct const_value
{
    static constexpr T value = v;
};

template <bool b>
using const_bool = const_value<bool, b>;

typedef const_bool<true> const_true;

int add(int a, int b)
{
    return a + b;
}

// class A
// {
// public:
//     A() {}
//     A(size_t size) : size(size), array((int *)malloc(size))
//     {
//         std::cout
//             << "create Array，memory at: "
//             << array << std::endl;
//     }
//     ~A()
//     {
//         free(array);
//     }
//     A(A &&a) : array(a.array), size(a.size)
//     {
//         a.array = nullptr;
//         std::cout
//             << "Array moved, memory at: "
//             << array
//             << std::endl;
//     }
//     A(A &a) : size(a.size)
//     {
//         array = (int *)malloc(a.size);
//         for (int i = 0; i < a.size; i++)
//             array[i] = a.array[i];
//         std::cout
//             << "Array copied, memory at: "
//             << array << std::endl;
//     }
//     size_t size;
//     int *array;
// };
// template <typename T>
// void warp(T &&param)
// {
//     if (std::is_rvalue_reference<decltype(param)>::value)
//     {
//         std::cout << "param is rvalue reference\n";
//     }
//     else
//         std::cout << "param is lvalue reference\n";
//     A y = A(param);
//     A z = A(std::forward<T>(param));
// }
// int main()
// {
//     A a = A(100);
//     warp(std::move(a));
//     return 0;
// }

template <typename T, typename std::enable_if<std::is_same<T, int>::value, int>::type = 0>
void fun(T t)
{
    std::cout << "我是整形"<<std::endl;
}

template <typename T, typename std::enable_if<std::is_same<T, float>::value, int>::type = 0>
void fun(T t)
{
    std::cout << "我是浮点"<<std::endl;
}

int main()
{
    fun(1);
    fun((float)0.5);
    return 0;
}
