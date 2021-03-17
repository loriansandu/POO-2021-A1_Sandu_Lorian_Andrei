//
// Created by Lorian-Andrei Sandu on 17.03.2021.
//

#ifndef MAIN_CPP_NUMBER_H
#define MAIN_CPP_NUMBER_H


class Number {
    char *val;
    int base;
public:
    Number(char * value, int base);
    Number(const Number &object);
    //~Number();
    int operator[] (int index);
    friend char* operator+ (Number &value1,Number &value2);
    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount();
    int GetBase();

};


#endif //MAIN_CPP_NUMBER_H
