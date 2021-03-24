//
// Created by Lorian-Andrei Sandu on 24.03.2021.
//

#include "Dacia.h"
#include "Weather.h"

Dacia::Dacia(){
    avgSpeed[Weather::Rain] = 25;
    avgSpeed[Weather::Snow] = 20;
    avgSpeed[Weather::Sunny] = 45;
    fuelCap = 9;
    fuelConsumpt = 10;

};
int Dacia::GetSpeed (int x) {
    return this->avgSpeed[x];

};
void Dacia::SetSpeed (int x) {


}


