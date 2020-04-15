//
// Created by jorge on 14/4/20.
//

#ifndef _INTEGER_H
#define _INTEGER_H

#include "../tipos.h"

class Integer {
private:
    int value;
public:
    Integer();
    Integer(int value);
    Integer(const Integer& other);
    Integer operator=(const Integer& other);
    Integer operator+(int value);
    operator int();
    friend ostream& operator <<(ostream& os, const Integer&);
    friend istream& operator >>(istream& os, Integer&);
    Integer operator^(int value);
    Integer operator/(int value);
    Integer operator+=(int value);
    Integer operator-(int value);
    Integer operator-=(int value);
    Integer operator*(int value);
    Integer operator*=(int value);
    bool operator>(const Integer& other);
    bool operator>=(const Integer& other);
    bool operator<(const Integer& other);
    bool operator<=(const Integer& other);
    bool operator!=(const Integer& other);
    bool operator==(const Integer& other);
};

#endif //_INTEGER_H