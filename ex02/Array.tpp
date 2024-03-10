#include "Array.hpp"

template <class T>
Array<T>::Array() : n(0), arr(NULL) {}

template <class T>
Array<T>::Array(unsigned int n) : arr(new T[n]), n(n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}

template <class T>
Array<T>::Array(Array const &other) // (새 메모리에) 포인터가 가리키는 데이터의 "내용"까지 복사(깊은 복사)
{
    if (this != &other)
    {
        this->n = other.n;
        this->arr = new T[this->n];
        for (unsigned int i = 0; i < this->n; i++) // 배열의 i 는 음수가 안됨
        {
            this->arr[i] = other.arr[i];
        }
    }
}

template <class T>
Array<T> &Array<T>::operator=(Array const &other)
{
    if (this != &other)
    {
        delete[] this->arr;
        this->n = other.n;
        this->arr = new T[this->n];
        for (unsigned int i = 0; i < this->n; i++)
        {
            this->arr[i] = other.arr[i];
        }
    }
    return *this;
}

template <class T>
Array<T>::~Array() { delete[] arr; }

template <class T>
T &Array<T>::operator[](unsigned int i)
{
    if (n <= i)
        throw std::exception();
    return arr[i];
}

template <class T>
unsigned int Array<T>::size() const { return n; }
