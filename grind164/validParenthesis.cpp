#include<iostream>
#include<stack>

using namespace std;

bool isValid(string s) {
    stack<int> st;
    bool ans = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if(st.empty()) {
                return false;
            }
            if(s[i] == ')' && st.top() == '(') {
                st.pop();
                ans = true;
            } else if(s[i] == ']' && st.top() == '[') {
                st.pop();
                ans = true;
            } else if(s[i] == '}' && st.top() == '{') {
                st.pop();
                ans = true;
            } else {
                return false;
            }
        }
    }
    if(!st.empty()) {
        return false;
    }
    return ans;
}



int main () {
    string s = "([]){";

    cout<< isValid(s);
    return 0;
}