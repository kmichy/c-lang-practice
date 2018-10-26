#ifndef _CROW_H_
#define _CROW_H_

#include "bird.h"

class CCrow:public CBird{
public:
    void sing(){
        cout << "カーカー" << endl;
    }
    void fly(){
        cout << "カラスが飛びます" << endl;
    }
};

#endif // _CROW_H_