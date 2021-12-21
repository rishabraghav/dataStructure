#include <iostream>

#include<cstring>

using namespace std;

void removeConsecutiveDuplicates(char *input) {
        int size = strlen(input);
    if(size == 0 || size == 1) {
        return;
    }
    if(input[0] == input[1]) {
        int i = 1;
        for(; i < size; i++) {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        removeConsecutiveDuplicates(input);
    } else {
        removeConsecutiveDuplicates(input + 1);
    }
    
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}