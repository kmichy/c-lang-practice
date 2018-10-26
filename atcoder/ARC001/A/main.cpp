#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
#define select 4

using namespace std;

int main(){
    int n;
    cin >> n;
    string c;
    cin >> c;
    // int max = INT_MIN;
    // int min = INT_MAX;
    int i,j;
    int count[4] = {};
    for(i = 0; i < n; i++){
        switch(c[i]){
            case '1':
                count[0]++;
                break;
            case '2':
                count[1]++;
                break;
            case '3':
                count[2]++;
                break;
            case '4':
                count[3]++;
                break;
            default:
                cout << "bag" << endl;
        }
    }
    cout << max(max(count[0],count[1]),max(count[2],count[3]));
    cout << " ";
    cout << min(min(count[0],count[1]),min(count[2],count[3]));
    cout << endl;
}