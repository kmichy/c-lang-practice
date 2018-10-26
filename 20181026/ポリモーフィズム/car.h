#ifndef _CAR_H_
#define _CAR_H_
#include <iostream>
#include <string>

using namespace std;

class Car{
private:
    int fuel;
    string name;
public:
    Car();
    Car(int fuel);
    virtual ~Car();
    void setFuel(int num);
    int getFuel();
    void setName(string name);
    string getName();
    void move(int fuel);

};

#endif // _CAR_H_