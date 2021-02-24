//
// Created by Lorian-Andrei Sandu on 24.02.2021.
//
#include "NumberList.h"
#include <iostream>

using namespace std;

int main() {
    NumberList n;
    n.Init();
    int x;
    cin >> x;
    while (n.Add(x))
        cin >> x;
    n.Sort();
    n.Print();

}