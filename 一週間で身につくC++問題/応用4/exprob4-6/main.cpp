#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    int tmp = -2;
    list<int>::iterator itr;
    int flag = 0;
    while(tmp != -1){
        if(tmp >= 0){
            if(li.empty() == true){
                li.push_back(tmp);
                cout << "入力された数:" << tmp << endl << endl;
            }else{
                flag = 0;
                itr = li.begin();
                cout << "入力された数:";
                while(itr != li.end()){
                    if(tmp <= *itr && flag == 0){
                        if(itr == li.begin()){
                            li.push_front(tmp);
                        }else{
                            li.insert(itr,tmp);
                        }
                        cout << tmp << " ";
                        flag = 1;
                    }
                    cout << *itr << " ";
                    itr++;
                }
                if(flag == 0){
                    li.push_back(tmp);
                    cout << tmp;
                }
                cout << endl << endl;
            }
        }
        cout << "正の整数を入力:";
        cin >> tmp;
        if(tmp != -1){
            cout << endl;
        }
    }
}