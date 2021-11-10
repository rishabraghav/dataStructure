#include <iostream>
#include <cstring>
using namespace std;

void replace( char (&a)[100], int size, const char c1, char c2) {
  for(int i = 0; i < size; i++) {
    if(a[i] == c1) {
      a[i] = c2;
    }
  }
}

int main() {
  char a[100];
  cin.getline(a, 100);
  char c1, c2;
  cin>> c1;
  cin>> c2;
  int size = strlen(a);
  replace(a, size, c1, c2);
  cout<<a;
} 