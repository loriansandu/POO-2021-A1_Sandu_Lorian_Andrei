//
// Created by Lorian-Andrei Sandu on 17.03.2021.
//

#include "Number.h"
int val(char c)
{
    if(c >= '0' && c <= '9')
        return (int)c - '0';
    return (int)c - 'A' +10;

}
int reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    return (char)(num - 10 + 'A');
}
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;
    for (i = len - 1; i >= 0; i--)
    {


        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}
char* fromDeci(char res[], int base, int inputNum) {
    int index = 0;
    while (inputNum > 0) {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
    strev(res);

    return res;
}

int Number::operator[](int i)
{   return this->val[i];

}
/*bool Number::operator>(Number &value1) {
    int val1,val2;
    val1=toDeci(this->val,this->base);
    val2=toDeci(value1.val,value1.base);
    if(val1>val2)
       return true;
    return false;

}
 */
Number& operator+(Number &value1,Number &value2)
{
    int val1,val2;
    Number p;
    char sir[100],*res;
    val1=toDeci(value1.val,value1.base);
    val2=toDeci(value2.val,value2.base);
    val1+=val2;

    if(value1.base>value2.base)
        res=fromDeci(sir,value1.base,val1),p.base=value1.base;
    else
        res=fromDeci(sir,value2.base,val1),p.base=value2.base;
    p.val=res;
    return p;
}
Number::Number() {
}
Number::Number( char *value, int base)
{
    this->val=value;
    this->base=base;
}
void Number::SwitchBase(int newBase)
{
    int newNumber;
    char result[100];
    char *res;
    newNumber=toDeci(this->val,this->base);
    res=fromDeci(result,newBase,newNumber);
    this->val=res;
    this->base=newBase;
}
int Number::GetDigitsCount() {
    return strlen(this->val);
}
int Number::GetBase() {
    return this->base;
}
void Number::Print()
{   char ssir[200];
   // strcpy(sir,this->val);
    cout<<this->val<<endl;
   // delete p1;
}


