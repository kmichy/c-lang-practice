#include <iostream>
#include "minmax.h"

using namespace std;

int main(){
    MinMax m;
    int a = 4;
    int b = 2;
    int c = 7;
    cout << a << "と" << b << "と" << c << "のうち、最大の物は" << m.max(a,b,c) << endl;
    cout << a << "と" << b << "と" << c << "のうち、最小の物は" << m.min(a,b,c) << endl;
    return 0;
}