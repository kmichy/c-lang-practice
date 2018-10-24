#include <vector>
#include <iostream>
#include <climits>

using namespace std;

void returnV(vector<int> v,int num){
    cout << "一の位が" << num << ":";
    if(v.begin() != v.end()){
        vector<int>::iterator itr;
        for(itr = v.begin(); itr != v.end();itr++){
            cout << *itr << " ";
        }
    }else{
        cout << "なし";
    }
    cout << endl;
}

int main(){
    vector<int> v0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    vector<int> v6;
    vector<int> v7;
    vector<int> v8;
    vector<int> v9;
    
    int tmp = -2;
    int max = INT_MIN;
    int min = INT_MAX;
    while(tmp != -1){
        if(tmp >= 0){
            switch(tmp % 10){
                case 0:
                    v0.push_back(tmp);
                    break;
                case 1:
                    v1.push_back(tmp);
                    break;
                case 2:
                    v2.push_back(tmp);
                    break;
                case 3:
                    v3.push_back(tmp);
                    break;
                case 4:
                    v4.push_back(tmp);
                    break;
                case 5:
                    v5.push_back(tmp);
                    break;
                case 6:
                    v6.push_back(tmp);
                    break;
                case 7:
                    v7.push_back(tmp);
                    break;
                case 8:
                    v8.push_back(tmp);
                    break;
                case 9:
                    v9.push_back(tmp);
                    break;
            }
        }
        cout << "正の整数を入力:";
        cin >> tmp;
    }
    cout << endl;
    returnV(v0,0);
    returnV(v1,1);
    returnV(v2,2);
    returnV(v3,3);
    returnV(v4,4);
    returnV(v5,5);
    returnV(v6,6);
    returnV(v7,7);
    returnV(v8,8);
    returnV(v9,9);
}