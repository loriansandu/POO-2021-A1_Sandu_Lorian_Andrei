//
// Created by Lorian-Andrei Sandu on 24.02.2021.
//
#include "global_functions.h"
#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;
int Name_cmp(Student S1, Student S2)
{
    if(strcmp(S1.GetName(),S2.GetName())==0)
        return 0;
    if(strcmp(S1.GetName(),S2.GetName())<0)
        return -1;
    else
        return 1;
}

