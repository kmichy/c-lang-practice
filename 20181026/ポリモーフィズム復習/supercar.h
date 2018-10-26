#ifndef _SUPERCAR_H_
#define _SUPERCAR_H_

#include <string>
#include <iostream>
#include "car.h"

class SuperCar : public Car{
public:
    SuperCar();
    SuperCar(int fuel);
    ~SuperCar();
    void move(int num);
    void fly();
};

#endif // _SUPERCAR_H_