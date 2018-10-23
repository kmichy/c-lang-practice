#include <iostream>

using namespace std;

void changeNumber(int& n);

int main(){
    int n = 5;
    cout << "変更前 : " << n << endl;
    changeNumber(n);
    cout << "変更後 : " << n << endl;
}

void changeNumber(int& n){
    n *= 2;
}