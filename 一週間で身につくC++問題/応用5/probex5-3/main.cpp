#include <iostream>
#include <stdio.h>
#include <time.h>
#include <set>

using namespace std;

inline void InitRand(){
    srand((unsigned int)time(NULL));
}

inline int return110(){
    return rand() % 10 + 1;
}

int main(){
    int i;
    InitRand();
    set<int> set;
    cout << "乱数:";
    int tmp;
    for(i = 0;i<10;i++){
        tmp = return110();
        set.insert(tmp);
        cout << tmp << " ";
    }
    cout << endl;

    ::set<int>::iterator itr;
    itr = set.begin();
    cout << "出現した数";
    while(itr != set.end()){
        cout << *itr << " ";
        itr++;
    }
    return 0;
}