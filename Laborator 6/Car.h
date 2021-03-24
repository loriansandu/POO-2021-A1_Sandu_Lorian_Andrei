//
// Created by Lorian-Andrei Sandu on 24.03.2021.
//

#ifndef TOUPPERCASE_C_CAR_H
#define TOUPPERCASE_C_CAR_H


class Car {
protected:
    float fuelCap, fuelConsumpt;
    float avgSpeed[3];
    int weatherCond;
public:
    virtual void SetSpeed(int weatherCond){}
    virtual void Race(){}
    virtual int getSpeed(){}
};

#endif //TOUPPERCASE_C_CAR_H
