#ifndef _NEWSTRING_H_
#define _NEWSTRING_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

class NewString{
private:
    string m_value;
public:
    NewString();
    NewString(string value);
    NewString(NewString& value);
    NewString& operator=(NewString& n);
    string getValue();
};

bool operator==(NewString& n1,NewString& n2);

#endif // _NEWSTRING_H_