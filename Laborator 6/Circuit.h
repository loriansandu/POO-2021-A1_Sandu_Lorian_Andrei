//
// Created by Lorian-Andrei Sandu on 24.03.2021.
//

#ifndef TOUPPERCASE_C_CIRCUIT_H
#define TOUPPERCASE_C_CIRCUIT_H
#include "Car.h"
class Circuit{

    float length;
    int weatherIndex;
    int carsLength=0;
    Car* Cars[5];
public:
    void SetLength(float length);
    void SetWeather(int weather);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
    void AddCar(Car* c);


};
#endif //TOUPPERCASE_C_CIRCUIT_H
