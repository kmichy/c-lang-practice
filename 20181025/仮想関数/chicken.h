#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class CChicken:public CBird{
public:
    void sing(){
        cout << "コケコッコー" << endl;
    }
    void fly(){
        cout << "ニワトリは飛べません" << endl;
    }
};

#endif // _CHICKEN_H_