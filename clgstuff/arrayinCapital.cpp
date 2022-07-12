#include<iostream>
using namespace std;

void capitalArray(char arr[]){
    for(int i = 0; i < 3; i++) {
        cout<< char(toupper(arr[i]));
    }
}



int main() {
    char arr[] = {'a', 'b', 'c'};
    capitalArray(arr);
    return 0;
}