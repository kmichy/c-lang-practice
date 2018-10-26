#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class FighterAircraft : public AirPlane{
public:
    FighterAircraft();
    void fly();
    void fight();
};

#endif // _PASSENGERPLANE_H_