#include "passengerplane.h"

PassengerPlane::PassengerPlane(){
    setType("旅客機");
}

void PassengerPlane::fly(){
    cout << "乗客を乗せて目的地まで飛行します。" << endl;
}
void PassengerPlane::carryPassengers(){
    cout << "乗客を目的地まで運びます。" << endl;
}