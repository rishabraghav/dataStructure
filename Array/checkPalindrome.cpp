#include <iostream>
#include<cstring>

using namespace std;

bool checkPalindrome(char a[], int size) {
  int i = 0;
  bool result = false;
  while(i < size) {
    if(a[i] == a[size]) {
      result = true;
    } else {
      result = false;
    }
    i++;
    size--;
  }
  return result;
}

int main() {
  char a[100];
  cin.getline(a, 100);
  int size = strlen(a);
  // cout<<size;   //comment this later;
  cout<< checkPalindrome(a, size - 1);
} 