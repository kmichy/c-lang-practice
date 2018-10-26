#include <iostream>
#include <typeinfo>

class Human{
public:
    virtual void speak() = 0;
};

class Girl : public Human{
public:
    void speak(){
        printf("I am girl.\n");
    }
};

class Boy : public Human{
public:
    void speak(){
        printf("I am boy.\n");
    }
};

int main(void){
    Girl alice;
    Boy bob;
    Human *ptr[] = {&bob,&alice};

    int i;
    for(i = 0; i < 2; i++){
        printf("%s\n",typeid(*ptr[i]).name());
        if(typeid(*ptr[i]) == typeid(Girl)){
            ptr[i]->speak();
        }
    }
    
    return 0;
}