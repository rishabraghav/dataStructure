#include <iostream>
#include<cstring>
#include<string>

using namespace std;

void removeDuplicate(char (&a)[100], int size){
  int i = 1;
  int j = 0;
  while(i <= size) {
    if(a[i] != a[i - 1]) {
      a[j] = a[i - 1];
      j++;
    }
    i++;
  }
  a[j] = '\0';
}

int main() {
  char a[100];
  cin.getline(a, 100);
  int size = strlen(a);
  removeDuplicate(a, size);
  cout<<a;
} 