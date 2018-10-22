#include "data.h"
#include <string>

void CData::init(){
    number = 0;
    comment = "";
}
void CData::setNumber(int num){
    number = num;
}

void CData::setComment(string str){
    comment = str;
}

int CData::getNumber(){
    return number;
}
string CData::getComment(){
    return comment;
}