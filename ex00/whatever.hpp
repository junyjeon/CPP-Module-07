#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

#endif // WHATEVER_HPP

/*
// 함수 템플릿
template <typename T>
void func(T 매개변수) {}

// 클래스 템플릿
template <class T = int>
class 클래스 {
public:
    T 멤버변수;
};

// 템플릿 오버라이드(int 타입에 대한 특수화)
template <>
void 함수<int>(int arg) {
    // int 타입에 대한 특수 구현
}
*/