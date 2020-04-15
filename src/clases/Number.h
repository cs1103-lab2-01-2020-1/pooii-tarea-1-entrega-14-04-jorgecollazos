//
// Created by jorge on 14/4/20.
//

#ifndef _NUMBER_H
#define _NUMBER_H

#include "../tipos.h"

template<typename T>
class Number {
private:
    T value;
public:
    Number();
    Number(T value);
    Number(const Number& other);
    Number operator=(const Number& other);
    Number operator+(T value);
    operator T();

    template <typename U>
    friend ostream& operator <<(ostream& os, const Number<U>&);
    template <typename U>
    friend istream& operator >>(istream& os, Number<U>&);

    Number operator^(T value);
    Number operator/(T value);
    Number operator+=(T value);
    Number operator-(T value);
    Number operator-=(T value);
    Number operator*(T value);
    Number operator*=(T value);

    bool operator>(const Number& other);
    bool operator>=(const Number& other);
    bool operator<(const Number& other);
    bool operator<=(const Number& other);
    bool operator!=(const Number& other);
    bool operator==(const Number& other);
};


#endif //_NUMBER_H