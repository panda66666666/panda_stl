#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include <cstdarg>
#include"vector.h"

template<class T, T v>
struct const_value
{
    static constexpr T value = v;
};

template<bool b>
using const_bool = const_value<bool, b>;

typedef const_bool<true> const_true;

int add(int a, int b)
{
    return a + b;
}

struct MyStruct
{
    int a;
    double b;
};
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

template<typename T, typename std::enable_if<std::is_same<T, int>::value, int>::type = 0>
void fun(T t)
{
    std::cout << "我是整形" << std::endl;
}

template<typename T, typename std::enable_if<std::is_same<T, float>::value, int>::type = 0>
void fun(T t)
{
    std::cout << "我是浮点" << std::endl;
}


//void syszuxPrint(int n, ...)
//{
//    va_list args;
//    va_start(args, n);
//    while (n--) {
//        std::cout << va_arg(args, int) << ", ";
//    }
//    va_end(args);
//    std::cout << std::endl;
//}


//void printValPara(int n, ...)
//{
//    va_list args;
//    va_start(args, n);
//    while (n--) {
//        std::cout << va_arg(args, int) << ',';
//    }
//    va_end(args);
//
//}
//
//int main(int argc, char **argv)
//{
//    printValPara(3, 'c', 'c', 'c');
//
//}

//int main()
//{
//    if(std::is_trivially_copy_assignable<
//            int>{})
//        std::cout<<'t';
//    else
//        std::cout<<'f';
////    std::vector<MyStruct> v(10);
////    MyStruct m1;
////    MyStruct m2;
////    v.push_back(m1);
////    v.push_back(m2);
//    return 0;
//}

//void syszuxPrint()
//{ std::cout << std::endl; }
//
//template<typename T, typename... Ts>
//void syszuxPrint(T arg1, Ts... arg_left)
//{
//    std::cout << arg1 << ", ";
//    syszuxPrint(arg_left...);
//}
//
//int main(int argc, char **argv)
//{
//    syszuxPrint(719, 7030, "civilnet");
//}


//int main() {
//    std::vector<std::vector<int>> matrix;
//
//    // 添加三个内层的 vector，长度分别为 1、2、3
//    matrix.push_back(std::vector<int>{1});
//    matrix.push_back(std::vector<int>{2, 2});
//    matrix.push_back(std::vector<int>{3, 3, 3});
//
//    // 打印矩阵
//    for (const auto& row : matrix) {
//        for (int num : row) {
//            std::cout << num << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}

//class test
//{
//private:
//    int a;
//    std::vector<int> v;
//    int b;
//public:
//    test(int a, std::initializer_list<int> v, int b) : a(a), v(v), b(b)
//    {}
//};
template<typename...Args>
void test(Args&&...args)
{
    return;
}

int main()
{
    test(1,'c');
    return 0;
}















