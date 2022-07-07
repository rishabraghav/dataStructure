#include<iostream>
#include<unordered_map>

using namespace std;

bool ransomeNote(string s1, string s2) {
    unordered_map<char, int> p;
    for(int i = 0; i < s2.length(); i++) {
        ++p[s2[i]];
    }
    for(int i = 0; i < p.size(); i++ ){
        if(p.find(s1[i]) != p.end()) {
            --p[s1[i]];
        } else return false;
    }
    return true;
}

int main(){
    string s1 = "aab"
;
    string s2 = "baa";

    cout<< ransomeNote(s1, s2);
    return 0;
}