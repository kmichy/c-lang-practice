#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vOdd;
    vector<int> vEven;
    int tmp = -2;
    int i;
    while(tmp != -1){
        if(tmp >= 0){
            if(tmp % 2 == 0){
                vEven.push_back(tmp);
            }else{
                vOdd.push_back(tmp);
            }
        }
        cout << "正の整数を入力:";
        cin >> tmp;
    }
    vector<int>::iterator itrO = vOdd.begin();
    vector<int>::iterator itrE = vEven.begin();
    cout << "偶数:";
    for(itrE = vEven.begin(); itrE != vEven.end(); itrE++){
        cout << *itrE << " ";
    }
    cout << endl;
    cout << "奇数:";
    for(itrO = vOdd.begin(); itrO != vOdd.end(); itrO++){
        cout << *itrO << " ";
    }
    cout << endl;
}