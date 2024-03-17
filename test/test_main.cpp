#include <iostream>

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

int main()
{
    // std::cout << "Hello World!";
    // int a = 0;
    // if (const_true::value)
    //     a = 1;
    // else
    //     a = 2;

    // int a = 5;
    // int &b = a;

    // // int &&b = 5;
    // std::cout << b;
    // a = 6;
    // std::cout << b;
    int i = 1;
    int c = i++ + ++i;
    return 0;
}