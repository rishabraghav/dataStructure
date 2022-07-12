#include<iostream>
using namespace std;


bool backspaceCompare(string s1, string s2){
    int size1 = s1.length();
    int size2 = s2.length();

    string r1;
    string r2;

    for(int i = 0; i < size1; i++) {
        if(s1[i] != '#') {
            r1.push_back(s1[i]);
        } else {
            r1.pop_back();
 
        }

        if(s2[i] != '#') {
           r2.push_back(s2[i]);
        } else {
            r2.pop_back();
        }
    }

    if(r1.compare(r2) == 0) return true;

    return false;
}


int main() {
    string s1 = "ab#c";
    string s2 = "ab#cd#";

    cout<< backspaceCompare(s1, s2); 
    return 0;
}


//ab#c
//