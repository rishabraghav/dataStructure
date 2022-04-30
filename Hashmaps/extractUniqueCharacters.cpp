#include <iostream>
#include <string>
using namespace std;
#include<unordered_map>

string uniqueChar(string str) {
	// Write your code here
    unordered_map<char, int> p;
    string answer;
    
    for(int i = 0; i < str.length(); i++) {
        if(p.find(str[i]) == p.end()) {
            answer.push_back(str[i]);
        } else {
            continue;
        }
        ++p[str[i]];
    }
    return answer;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}