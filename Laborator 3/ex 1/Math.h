//
// Created by Lorian-Andrei Sandu on 03.03.2021.
//

#ifndef MAIN_CPP_MATH_H
#define MAIN_CPP_MATH_H
#include <iostream>
#include <cstdarg>
#include <cstring>
#include <stdlib.h>

using namespace std;
class Math {
public:
    static int Add(int,int);
    static int Add(int,int,int);
    static int Add(double,double);
    static int Add(double,double,double);
    static int Mul(int,int);
    static int Mul(int,int,int);
    static int Mul(double,double);
    static int Mul(double,double,double);
    static int Add(int count,...); // sums up a list of integers
    static char* Add(const char *, const char *);

};
#endif //MAIN_CPP_MATH_H
