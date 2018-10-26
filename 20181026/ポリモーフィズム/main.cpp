#include <iostream>
#include <string>
#include "car.h"
#include "supercar.h"

int main(){
    Car *c1,*c2;
    SuperCar *s1,*s2;
    c1 = new Car(100);
    cout << "現在の燃料は" << c1->getFuel() << "Lです" << endl;
    c1->move(50);
    cout << "燃料を1000にします" << endl;    
    c1->setFuel(1000);
    cout << c1->getName() << endl << endl;

    
    c2 = new SuperCar(100);
    cout << "現在の燃料は" << c2->getFuel() << "Lです" << endl;
    c2->move(50);
    cout << "現在の燃料は" << c2->getFuel() << "Lです" << endl;
    c2->move(50);
    cout << "燃料を1000にします" << endl;
    c2->setFuel(1000);
    cout << c2->getName() << endl << endl;

    // s1 = new Car(100);
    // cout << "現在の燃料は" << s1->getFuel() << "Lです" << endl;
    // s1->move(10);
    // s1->setFuel(1000);
    // cout << "現在の燃料は" << s1->getFuel() << "Lです" << endl;
    // s1->setName("aaaa");
    // cout << s1->getName() << endl << endl;
    
    s2 = new SuperCar(100);
    cout << "現在の燃料は" << s2->getFuel() << "Lです" << endl;
    s2->move(50);
    cout << "燃料を1000にします" << endl;    
    s2->setFuel(1000);
    cout << s2->getName() << endl << endl;

    delete c1;
    delete c2;
    // delete s1;
    delete s2;
    return 0;
}