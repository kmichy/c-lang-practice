#include "vector.h"

Vector::Vector():m_x(0),m_y(0){

}

Vector::Vector(double a,double b):m_x(a),m_y(b){
    
}

void Vector::set(double x,double y){
    m_x = x;
    m_y = y;
}

double Vector::getX(){
    return m_x;
}

double Vector::getY(){
    return m_y;
}