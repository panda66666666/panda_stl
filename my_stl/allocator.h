//
// Created by Hi on 2024/3/27.
//

#ifndef MYPROJECT_ALLOCATOR_H
#define MYPROJECT_ALLOCATOR_H

#include "cstddef"

//只根据数据类型来分配内存，不调用任何构造函数
namespace panda_stl
{
    template<typename T>
    class Allocator
    {
    private:
        using value_type = T;
    public:
        static T *allocate();

        static T *allocate(size_t n);

        static void deallocate(T *ptr);
    };

    template<typename T>
    T *Allocator<T>::allocate()
    {
        return static_cast<T *>(::operator new(sizeof(T)));
    }

    template<typename T>
    T *Allocator<T>::allocate(size_t n)
    {
        return static_cast<T *>(::operator new(n * sizeof(T)));
    }

    template<typename T>
    void Allocator<T>::deallocate(T *ptr)
    {
        if (!ptr) ::operator delete(ptr);
    }
}


#endif //MYPROJECT_ALLOCATOR_H
