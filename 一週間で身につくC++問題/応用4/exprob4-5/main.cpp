#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    int tmp = -2;
    while(tmp != -1){
        if(tmp >= 0){
            li.push_back(tmp);
        }
        cout << "正の整数を入力:";
        cin >> tmp;
    }
    li.remove(2);
    list<int>::iterator itr;
    for(itr = li.begin(); itr != li.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
}