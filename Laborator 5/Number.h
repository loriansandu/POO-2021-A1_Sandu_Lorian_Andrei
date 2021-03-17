//
// Created by Lorian-Andrei Sandu on 17.03.2021.
//

#ifndef MAIN_CPP_NUMBER_H
#define MAIN_CPP_NUMBER_H
#include <iostream>
#include <string.h>
using namespace std;

class Number {
    Number();

    char *val;
    int base;
public:
    Number(char * value, int base);
    //~Number();
    int operator[] (int index);
    bool operator> (Number &value1);
    friend Number& operator+ (Number &value1,Number &value2);

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount();
    int GetBase();

};


#endif //MAIN_CPP_NUMBER_H
