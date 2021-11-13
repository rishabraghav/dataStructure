#include <iostream>
#include<cstring>

using namespace std;

void reverse(char (&a)[100], int size, int start) {
  int i = start;
  int j = size - 1;
  while(i < j) {
    char temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
}
void reverseWord(char (&a)[100], int size, int start){
  int i = 0;
  while( i < size) {

    if(a[i] == ' ') {
      reverse(a, i, start);
      start = i + 1;
    } 
    i++;
    if(i == size) {
      reverse(a, i, start);
    }
  }
}



int main() {
  char a[100];
  cin.getline(a, 100);
  int size = strlen(a);
  int start = 0;
  reverse(a, size, start);
  reverseWord(a, size, start);
  cout<<a;
} 