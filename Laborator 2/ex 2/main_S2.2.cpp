//
// Created by Lorian-Andrei Sandu on 23.02.2021.
//
#include "Student.h"
#include "global_functions.h"
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    Student S1,S2;
    char n[10];
    cout<<"Enter Name for first student: ";
    cin>>n;
    S1.SetName(n);
    cout<<"Name is: "<<S1.GetName()<<endl;
    S1.SetMath();
    cout<<"Math Grade= "<<S1.GetMath()<<endl;
    S1.SetEng();
    cout<<"Eng Grade= "<<S1.GetEng()<<endl;
    S1.SetHst();
    cout<<"Hst Grade= "<<S1.GetHst()<<endl;
    cout<<"Avg Grade is "<<S1.AvgGrd()<<endl;

    cout<<"Enter Name for second student: ";
    cin>>n;
    S2.SetName(n);
    cout<<"Name is: "<<S2.GetName()<<endl;
    S2.SetMath();
    cout<<"Math Grade= "<<S2.GetMath()<<endl;
    S2.SetEng();
    cout<<"Eng Grade= "<<S2.GetEng()<<endl;
    S2.SetHst();
    cout<<"Hst Grade= "<<S2.GetHst()<<endl;
    cout<<"Avg Grade is "<<S2.AvgGrd()<<endl;

    cout<<"Name Compare: "<<Name_cmp(S1,S2)<<endl;
    cout<<"Math Compare: "<<Math_cmp(S1,S2)<<endl;
    cout<<"Eng Compare: "<<Eng_cmp(S1,S2)<<endl;
    cout<<"Hst Compare: "<<Hst_cmp(S1,S2)<<endl;
    cout<<"Avg Compare: "<<Avg_cmp(S1,S2)<<endl;




}
