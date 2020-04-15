//
// Created by jorge on 14/4/20.
//

#include "Number.h"
template <typename T>
Number<T>::Number() {
    this->value = 0;
}

template <typename T>
Number<T>::Number(T value){
    this->value = value;
}

template <typename T>
Number<T>::Number(const Number& other){
    this->value = other.value;
}

template <typename T>
Number<T> Number<T>::operator=(const Number& other){
    return this->value = other.value;
}

template <typename T>
Number<T> Number<T>::operator+(T value){
    return this->value + value;
}

template <typename T>
Number<T>::operator T(){
    return this->value;
}

template <typename U>
std::ostream& operator <<(std::ostream& os, const Number<U>& other){
    os << other.value;
    return os;
}

template <typename U>
std::istream& operator >>(std::istream& os, Number<U>& other){
    os >> other.value;
    return os;
}

template <typename T>
Number<T> Number<T>::operator^(T value){
    auto tmp = this->value;
    if (value == 0) return this->value = 0;
    for(int i = 1; i < value; ++i)
        tmp *= this->value;
    return this->value = tmp;
}

template <typename T>
Number<T> Number<T>::operator/(T value){
    return this->value / value;
}

template <typename T>
Number<T> Number<T>::operator+=(T value){
    return this->value += value;
}

template <typename T>
Number<T> Number<T>::operator-(T value){
    return this->value - value;
}

template <typename T>
Number<T> Number<T>::operator-=(T value){
    return this->value -= value;
}

template <typename T>
Number<T> Number<T>::operator*(T value){
    return this->value * value;
}

template <typename T>
Number<T> Number<T>::operator*=(T value){
    return this->value *= value;
}

template <typename T>
bool Number<T>::operator>(const Number& other){
    if(this->value > other.value) return true;
    return false;
}

template <typename T>
bool Number<T>::operator>=(const Number& other){
    if(this->value >= other.value) return true;
    return false;
}

template <typename T>
bool Number<T>::operator<(const Number& other){
    if(this->value < other.value) return true;
    return false;
}

template <typename T>
bool Number<T>::operator<=(const Number& other){
    if(this->value <= other.value) return true;
    return false;
}

template <typename T>
bool Number<T>::operator!=(const Number& other){
    if(this->value != other.value) return true;
    return false;
}

template <typename T>
bool Number<T>::operator==(const Number& other){
    if(this->value == other.value) return true;
    return false;
}