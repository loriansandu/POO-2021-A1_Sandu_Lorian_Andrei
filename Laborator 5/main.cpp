//
// Created by Lorian-Andrei Sandu on 17.03.2021.
//
#include "Number.h"

int main()
{


    Number n1("100",10);
    Number n2("734",10);
    Number n3("100",10);

    printf("n1 has %d digits and it is written in base %d\n",n1.GetDigitsCount(),n1.GetBase());
    for (int tr=0;tr<n1.GetDigitsCount();tr++)
    {
        printf("n1[%d]=%c\n",tr,n1[tr]);
    }
   // n1.Print();
    n2.Print();
    n1=n3+n2+n1;
    n1.Print();
    n1.SwitchBase(2);
    n1.Print();






}

