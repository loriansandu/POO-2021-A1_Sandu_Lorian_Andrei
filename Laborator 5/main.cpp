//
// Created by Lorian-Andrei Sandu on 17.03.2021.
//
#include "Number.h"

int main()
{


    Number n1("10110010",2);
    Number n2("734",8);
    Number n3("FF",16);

    printf("n1 has %d digits and it is written in base %d\n",n1.GetDigitsCount(),n1.GetBase());
    for (int tr=0;tr<n1.GetDigitsCount();tr++)
    {
        printf("n1[%d]=%c\n",tr,n1[tr]);
    }

    n2.SwitchBase(10);
    //n1.SwitchBase(10);
   // n1.Print();
   n3.SwitchBase(10);

    n2.Print();
    n1=n2+n1;
    n3.Print();
    n2=n1+n3;
    n1.Print();
    n1.SwitchBase(2);
    n1.Print();

    /*if (n1>n2)
        printf("n1 is bigger than n2\n");
    else printf("n2 is bigger than n1\n");
*/





}

