#include "NewString.h"
#include <algorithm>

NewString::NewString(){
    m_value = "";
}

NewString::NewString(string value){
    m_value = value;
}
NewString::NewString(NewString& value){
    m_value = value.getValue();
}

NewString& NewString::operator=(NewString& n){
    m_value = n.getValue();
    return *this;
}

bool operator==(NewString& n1,NewString& n2){
    string l1 = n1.getValue();
    std::transform(l1.begin(),l1.end(),l1.begin(),::toupper);
    string l2 = n2.getValue();
    std::transform(l2.begin(),l2.end(),l2.begin(),::toupper);
    if(l1 == l2){
        return true;
    }else{
        return false;
    }
}

string NewString::getValue(){
    return m_value;
}