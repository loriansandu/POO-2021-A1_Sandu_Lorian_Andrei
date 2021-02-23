#include <iostream>
#include <stdio.h>
#include <cstring>
#define _CRT_SECURE_NO_DEPRECATE

int suma= 0;
int nr;
char sir[100];
int main()
{
   
    FILE*   fisier;
    fisier = fopen("ini.txt","r");
    while(!feof(fisier))
    {
        fscanf(fisier, "%s\n",sir);
        nr=0;
        for(int i=0;i <strlen(sir);i++)
        nr=nr*10 + (sir[i]-'0');
        suma+=nr;
        
    }
    
    printf("%d",suma);
}
