#include <iostream>
#include "collection.hpp"

using namespace std;

int main(){
    int array[] = {1,5,4,2,3};
    Collection<int>* c = new Collection<int>(array,sizeof(array)/sizeof(array[0]));
    double array2[] = {1.2,3.5,8.1,4.9,2.0,2.2};
    Collection<double>* d = new Collection<double>(array2,sizeof(array2)/sizeof(array2[0]));
    cout << "実数の場合" << endl;
    d->showArray();
    cout << "最大値:" << d->getMax() << endl;
    cout << "最小値:" << d->getMin() << endl << endl;
    delete d;
    cout << "整数の場合" << endl;
    c->showArray();
    cout << "最大値:" << c->getMax() << endl;
    cout << "最小値:" << c->getMin() << endl << endl;
    delete c;
    return 0;
}