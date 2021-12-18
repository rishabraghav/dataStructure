#include <iostream>

#include<cstring>

using namespace std;

void fun(char input[], char c1, char c2, int size) {
    if(size == 0) {
        return;
    } 
    fun(input + 1, c1, c2, size - 1);
    if(input[0] == c1) {
        input[0] = c2;
    }
}

void replaceCharacter(char input[], char c1, char c2) {
    int size = strlen(input);
   fun(input, c1, c2, size);
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

