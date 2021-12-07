#include <iostream>

using namespace std;

#include <cstring>

bool checkPalindrome(char input[]) {
    int size = strlen(input);
    int first = 0;
    int last = size - 1;
    
    while(first < last) {
        if(input[first] != input[last]) {
            return false;
        }
        first++;
        last--;
    }
    return true;
	
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

