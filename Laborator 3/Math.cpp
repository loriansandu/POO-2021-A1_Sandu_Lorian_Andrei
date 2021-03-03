//
// Created by Lorian-Andrei Sandu on 03.03.2021.
//
#include "Math.h"
int Math::Add(int x, int y) {
    return x+y;

}
int Math::Add(int x, int y, int z) {
    return x+y+z;
}
int Math::Add(double x, double y) {
    return x+y;
}
int Math::Add(double x, double y, double z) {
    return x+y+z;
}
int Math::Mul(int x, int y) {
    return x*y;
}
int Math::Mul(int x, int y, int z) {
    return x*y*z;
}
int Math::Mul(double x, double y) {
    return x*y;
}
int Math::Mul(double x, double y, double z) {
    return x*y*z;
}
int Math::Add(int count, ...) {
    va_list arguments;
    va_start(arguments, count);
    int sum=0;
    for(int i=1;i<=count;i++)
        sum+=va_arg(arguments,int);
    va_end(arguments);
    return sum;
}
char* Math::Add(const char *x, const char *y) {
    if(x==NULL || y==NULL)
        return NULL;
    else
    {   std::string resultstr;
        int a;
        a=atoi(x)+atoi(y);
        resultstr=std::to_string(a);
        char* p=(char *) malloc(resultstr.length()+1);
        strcpy(p,resultstr.c_str());
        return p;


    }

}
