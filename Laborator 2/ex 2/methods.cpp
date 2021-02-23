//
// Created by Lorian-Andrei Sandu on 23.02.2021.
//
#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
void Student::SetName(const char *n) {
    strcpy(name,n);
}
char * Student::GetName(){

    return (this->name);
}
void Student::SetMath(){
    float x;
    cout<<"Enter Grade for Math: ";
    cin>>x;
    if(x>=1 && x<=10)
        this->math=x;

}
int Student::GetMath(){
    return this->math;

}
void Student::SetEng(){
    float x;
    cout<<"Enter Grade for Eng: ";
    cin>>x;
    if(x>=1 && x<=10)
        this->english=x;

}
int Student::GetEng(){
    return this->english;

}
void Student::SetHst(){
    float x;
    cout<<"Enter Grade for History: ";
    cin>>x;
    if(x>=1 && x<=10)
        this->history=x;

}
int Student::GetHst(){
    return this->history;

}
float Student::AvgGrd()
{

   return ((this->math + this->history + this->english)/3.0);

}