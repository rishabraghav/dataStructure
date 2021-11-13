#include <iostream>
#include<cstring>
using namespace std;

void substring(char(&a)[100], int size) {
  int i = 0;
  int j = i;
  while(i < size) {
    int k = i;
    while(k <= j) {
      cout<<a[k];
      k++;
    }
    j++;
    cout<<endl;
    if(j == size) {
      
      i++;
      j = i;
    }
  }
}

int main() {
  char a[100];
  cin.getline(a, 100);
  int size = strlen(a);
  substring(a, size);
} 