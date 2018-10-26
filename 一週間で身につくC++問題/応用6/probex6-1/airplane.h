#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_
#include <string>

using namespace std;

class AirPlane{
private:
    string m_type;
public:
    void setType(string type);
    string getType();
    virtual void fly() = 0;
};

#endif //_AIRPLANE_H_