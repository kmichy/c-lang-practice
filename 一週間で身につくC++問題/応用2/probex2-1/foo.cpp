#include "foo.h"
#include <iostream>

using namespace std;

void Foo::hoge(){
    cout << "Foo::hoge()" << endl;
}
void Foo::fuga(Bar* pBar){
    cout << "Fpp::fuga()" << endl;
    pBar->func2();
}