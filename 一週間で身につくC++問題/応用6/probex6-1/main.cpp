#include <iostream>
#include "fightercraft.h"
#include "passengerplane.h"

using namespace std;

int main(){
    FighterAircraft* fighter = new FighterAircraft();
    PassengerPlane* airlinear = new PassengerPlane();

    fighter->fly();
    fighter->fight();

    airlinear->fly();
    airlinear->carryPassengers();

    delete fighter;
    delete airlinear;
}