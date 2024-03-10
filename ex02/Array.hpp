#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
    T *arr; // 동적할당 배열
    // T arr[]; // 정적할당 배열
    unsigned int n;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &);
    Array &operator=(const Array &);
    ~Array();
    T &operator[](unsigned int i);
    unsigned int size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
