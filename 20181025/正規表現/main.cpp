#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
	string tmpstr = "abcde";
	string tmpnum = "12345";
	regex num("^[0-9]+$");
	if(regex_search(tmpstr,num)){
		cout << tmpstr << "は数字です";
	}
	if(regex_search(tmpnum,num)) {
		cout << tmpnum << "は数字です";
	}
}