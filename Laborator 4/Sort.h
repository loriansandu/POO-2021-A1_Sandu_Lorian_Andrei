//
// Created by Lorian-Andrei Sandu on 10.03.2021.
//

#ifndef MAIN_CPP_SORT_H
#define MAIN_CPP_SORT_H
#include <iostream>
using namespace std;

class Sort{
    struct Node{
        int n;
        Node *next;
        Node *prev;
    }*first,*last;
public:
    Sort(int count, int min, int max);
    Sort(Node *list);
    Sort(int count,int []);
    Sort(int count, ...);
    Sort(const char * s);
    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};


#endif //MAIN_CPP_SORT_H
