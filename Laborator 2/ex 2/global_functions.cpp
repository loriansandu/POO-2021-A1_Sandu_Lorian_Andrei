//
// Created by Lorian-Andrei Sandu on 24.02.2021.
//
#include "global_functions.h"
#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;
int Name_cmp(Student s1, Student s2)
{
    if(strcmp(s1.GetName(),s2.GetName())==0)
        return 0;
    if(strcmp(s1.GetName(),s2.GetName())<0)
        return -1;
    else
        return 1;
}
int Math_cmp(Student S1, Student S2)
{
    if(S1.GetMath()==S2.GetMath())
        return 0;
    if(S1.GetMath()<S2.GetMath())
        return -1;
    else
        return 1;
}
int Hst_cmp(Student S1, Student S2)
{
    if(S1.GetHst()==S2.GetHst())
        return 0;
    if(S1.GetHst()<S2.GetHst())
        return -1;
    else
        return 1;
}
int Eng_cmp(Student S1, Student S2)
{
    if(S1.GetEng()==S2.GetEng())
        return 0;
    if(S1.GetEng()<S2.GetEng())
        return -1;
    else
        return 1;
}
int Avg_cmp(Student S1,Student S2)
{
    if(S1.AvgGrd()==S2.AvgGrd())
        return 0;
    if(S1.AvgGrd()<S2.AvgGrd())
        return -1;
    else return 1;

}