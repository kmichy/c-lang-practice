#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class CBird{
public:
    virtual void sing() = 0;
    void fly(){
        cout << "鳥が飛びます" << endl;
    }
};

#endif //_BIRD_H_