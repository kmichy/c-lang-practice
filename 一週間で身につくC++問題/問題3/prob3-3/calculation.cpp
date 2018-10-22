#include "calculation.h"

void Calculation::setNumber1(int n){
    number1 = n;
}
void Calculation::setNumber2(int n){
    number2 = n;
}
int Calculation::getNumber1(){
    return number1;
}
int Calculation::getNumber2(){
    return number2;
}
int Calculation::add(){
    return number1 + number2;
}
int Calculation::sub(){
    return number1 - number2;
}