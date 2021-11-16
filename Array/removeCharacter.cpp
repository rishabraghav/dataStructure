#include <iostream>
#include<cstring>

using namespace std;

void removeCharacter(char (&a)[100], int size, char (&r)){
  int j = 0;
  for(int i = 0; i < size; i++) {
    if(a[i] == r) {
      continue;
    } else {
      a[j] = a[i];
      j++;
    }
  }
  a[j] = '\0';
}
int main() {
  char a[100];
  cin.getline(a,100);
  char r;
  cin >> r;
  int size = strlen(a);

  removeCharacter(a, size, r);
  cout<<a;
} 