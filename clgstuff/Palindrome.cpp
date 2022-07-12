#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s1, string s2)
{
    s1.append(s2);
    int i = 0;
    int j = s1.length() - 1;
    
    bool ans = true;
    while(i <= j) {
        if(s1[i] != s1[j]){
            return false;
        } 
        i++;
        j--;
    }
    return ans;
}

int main() {
    string s1 = "aba";
    string s2 = "aba";
    cout<< checkPalindrome(s1, s2);
    return 0;
}
