#include <iostream>
#include <cstring>

using namespace std;

void trim(char (&a)[100],int size){
  for(int i = 0; i < size; i++) {
    if(a[i] == ' '){
      int j = i;
      while(1) {
        if(a[j] != ' ') {
          swap(a[i], a[j]);
          break;
        }
        j++;
      }
    }
  }
  
}

int main() {
  char a[100];
  cin.getline(a, 100);
  int size = strlen(a);
  trim(a, size);
  cout<<a;
} 