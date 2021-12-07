#include <iostream>

using namespace std;

#include <cstring>

bool ispal(char input[], int s, int e){
    if(s == e) {
        return true;
    }
    
    if(input[s] != input[e]) {
        return false;
    }
    
    if(s < e) {
        ispal(input, s + 1, e - 1);
    }
}

bool checkPalindrome(char input[]) {
    int size = strlen(input);
    int s = 0;
    int e = size - 1;
    
    return ispal(input, s, e);
	
}




int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

