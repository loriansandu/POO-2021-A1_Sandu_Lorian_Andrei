//
// Created by Lorian-Andrei Sandu on 23.02.2021.
//

#ifndef MAIN_CPP_STUDENT_H
#define MAIN_CPP_STUDENT_H

class Student{
    char name[10];
    float math,english,history;
public:
    void SetName(const char *n);
    char * GetName();
    void SetMath();
    int GetMath();
    void SetEng();
    int GetEng();
    void SetHst();
    int GetHst();
    float AvgGrd();

};
#endif //MAIN_CPP_STUDENT_H
