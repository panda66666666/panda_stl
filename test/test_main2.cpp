//
// Created by panda on 3/21/24.
//
#include "iostream"
#include "vector"

using namespace std;


int add(const int &a,const int &b)
{
    return a+b;
}

int add(int &&a,int &&b)
{
    return a+b;
}

int main()
{
    int a=1,b=2;
    cout<<add(2,1);
    return 0;
}