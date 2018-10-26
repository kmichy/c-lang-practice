#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main(){
    map<char,string> shiritori;
    string word[] = {"room","wonderful","pork","trap","kind","money","dog","given","yellow","eat","apple","neighbor"};
    int word_count = sizeof(word)/sizeof(word[0]);
    int i;
    for(i = 0; i < word_count; i++){
        shiritori[word[i][0]] = word[i];
    }
    list<string> li;
    list<string>::iterator itr;
    string tmp;
    int tmplen;
    for(i = 0; i < word_count; i++){
        li.push_back(word[i]);
        while(word_count != li.size()){
            itr = li.end();
            itr--;
            tmp = *itr;
            tmplen = tmp.length();
            if(shiritori.find(tmp[tmplen - 1]) != shiritori.end()){
                li.push_back(shiritori[tmp[tmplen - 1]]);
            }else{
                break;
            }
        }
        if(word_count == li.size()){
            break;
        }
        li.clear();
    }
    itr = li.begin();
    while(itr != li.end()){
        cout << *itr << " ";
        itr++;
    }
    cout << endl;
}