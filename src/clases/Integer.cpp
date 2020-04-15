//
// Created by jorge on 14/4/20.
//

#include "Integer.h"

Integer::Integer() {
    this->value = 0;
}

Integer::Integer(int value){
    this->value = value;
}

Integer::Integer(const Integer& other){
    this->value = other.value;
}

Integer Integer::operator=(const Integer& other){
    return this->value = other.value;
}

Integer Integer::operator+(int value){
    return this->value + value;
}

Integer::operator int(){
    return this->value;
}

ostream& operator <<(ostream& os, const Integer& inte){
    os << inte.value;
    return os;
}

istream& operator >>(istream& os, Integer& inte){
    os >> inte.value;
    return os;
}

Integer Integer::operator^(int value){
    auto tmp = this->value;
    if (value == 0) return this->value = 0;
    for(int i = 1; i < value; ++i)
        tmp *= this->value;
    return this->value = tmp;
}

Integer Integer::operator/(int value){
    return this->value / value;
}

Integer Integer::operator+=(int value){
    return this->value += value;
}

Integer Integer::operator-(int value){
    return this->value - value;
}

Integer Integer::operator-=(int value){
    return this->value -= value;
}

Integer Integer::operator*(int value){
    return this->value * value;
}

Integer Integer::operator*=(int value){
    return this->value *= value;
}

bool Integer::operator>(const Integer& other){
    if(this->value > other.value) return true;
    return false;
}

bool Integer::operator>=(const Integer& other){
    if(this->value >= other.value) return true;
    return false;
}

bool Integer::operator<(const Integer& other){
    if(this->value < other.value) return true;
    return false;
}

bool Integer::operator<=(const Integer& other){
    if(this->value <= other.value) return true;
    return false;
}

bool Integer::operator!=(const Integer& other){
    if(this->value != other.value) return true;
    return false;
}

bool Integer::operator==(const Integer& other){
    if(this->value == other.value) return true;
    return false;
}