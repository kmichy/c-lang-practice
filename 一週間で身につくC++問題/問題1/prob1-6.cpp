#include <iostream>
#include <string>

using namespace std;

int main(){
    string sei,mei;
    cout << "姓を入力:";
    cin >> sei;
    cout << "名を入力:";
    cin >> mei;
    cout << "名前は「" << sei + mei << "」です。" << endl;
}