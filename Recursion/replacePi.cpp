#include <iostream>
#include<cstring>
using namespace std;



void replacePi(char input[]) {
	if(strlen(input) == 0 || strlen(input) == 1) {
        return;
    }
    if(input[0] == 'p' && input[1] == 'i') {
       	for(int i = 0; i < 2; i++) {
            for(int j = strlen(input) - 1; j >= 0; j--) {
                input[i + 1] = input[i];
            }
            input[i + 1] = input[i];
            // input[i + 1] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    } else {
        replacePi(input + 1);
    }
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

