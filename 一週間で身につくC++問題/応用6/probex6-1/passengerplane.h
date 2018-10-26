#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;
class PassengerPlane : public AirPlane{
public:
    PassengerPlane();
    void fly();
    void carryPassengers();
};

#endif // _PASSENGERPLANE_H_