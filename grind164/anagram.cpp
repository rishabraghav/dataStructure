#include<iostream>

using namespace std;

bool validAnagram(string s, string g){
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());

    if(s == g) {
        return true;
    } else {
        return false;
    }
}


int main(){
    string s;
    string g;
    getline(cin, s);
    getline(cin, g);

    if(validAnagram(s, g)) {
        cout << "true";
    } else {
        cout<< "false";
    }
    return 0;
}