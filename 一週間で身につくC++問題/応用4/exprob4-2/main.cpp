#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    vector<int> v;
    int max = INT_MIN;
    int min = INT_MAX;
    int tmp = -2;
    while(tmp != -1){
        if(tmp >= 0){
            v.push_back(tmp);
            if(max < tmp){
                max = tmp;
            }
            if(min > tmp){
                min = tmp;
            }
        }
        cout << "正の整数を入力:";
        cin >> tmp;
    }
    cout << endl;
    cout << "最大値:" << max << endl;
    cout << "最小値:" << min << endl;
}