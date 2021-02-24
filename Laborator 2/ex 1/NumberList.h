//
// Created by Lorian-Andrei Sandu on 24.02.2021.
//

#ifndef OOP_NUMBERLIST_H
#define OOP_NUMBERLIST_H



class NumberList
{
    int numbers[10];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
    // if count is bigger or equal to 10, the function will return false
    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};
#endif //OOP_NUMBERLIST_H