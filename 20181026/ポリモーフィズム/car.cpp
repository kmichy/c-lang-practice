#include "car.h"

Car::Car() : fuel(0),name("車"){
    cout << "carコンストラクタ起動" << endl;
}
Car::Car(int fuel) : fuel(fuel),name("車"){
    cout << "carコンストラクタ起動" << endl;
}
Car::~Car(){
    cout << "carデストラクタ起動" << endl;
}

void Car::setFuel(int num){
    fuel = num;
}
int Car::getFuel(){
    return fuel;
}
void Car::setName(string name){
    this->name = name;
}
string Car::getName(){
    return name;
}
void Car::move(int num){
    if(fuel - num >= 0){
        fuel -= num;
        cout << num << "m動きました" << endl << "残り燃料は" << fuel << "です" << endl;
    }else{
        cout << "燃料が足りません" << endl;
    }
}