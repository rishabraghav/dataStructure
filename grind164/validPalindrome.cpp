#include<iostream>

using namespace std;

string simplify(string s) {
    int size = s.length();
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int j = 0;

    for(int i = 0; i < size; i++) {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9') {
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0, j);
}


bool checkPalindrome(string s) {
    s = simplify(s);
    int i = 0;
    int j = s.length() - 1;
    bool ans = true;
    while(i <= j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }

    return ans;
}


int main () {
    string s;
    getline(cin, s);

    if(checkPalindrome(s)){
        cout<< "true";
    } else {
        cout<< "false";
    } 
    return 0;
}