#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
private:
    int number;
    string comment;
public:
    void init();
    void setNumber(int num);
    void setComment(string str);
    int getNumber();
    string getComment();
};

#endif //_CDATA_H_