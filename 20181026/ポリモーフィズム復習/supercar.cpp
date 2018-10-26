#include "supercar.h"

SuperCar::SuperCar(){
    cout << "SuperCarコンストラクタ起動" << endl;
    setName("すごい車");
}
SuperCar::SuperCar(int fuel){
    cout << "SuperCarコンストラクタ起動" << endl;
    setFuel(fuel);
    setName("すごい車");
}
SuperCar::~SuperCar(){
    cout << "Supercarデストラクタ起動" << endl;
}
void SuperCar::move(int num){
    if(getFuel() - num/2 >= 0){
        setFuel(getFuel() - num/2);
        cout << num << "m動きました" << endl << "残り燃料は" << getFuel() << "です" << endl;
    }else{
        cout << "燃料が足りません" << endl;
    }
}
void SuperCar::fly(){
    cout << "飛びます" << endl;
}