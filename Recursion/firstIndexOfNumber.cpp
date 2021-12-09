#include<iostream>

using namespace std;

int firstIndex(int input[], int size, int x) {
  if(size == 0) {
      return -1;  //if the element is not present in the array
  } else {
      static int i = 0;
      if(input[0] == x) {
          return i;
      } else {
          i++;  //for recursion its zero index, but in real its 0 + 1
          firstIndex(input + 1, size - 1, x);
      }
  }

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}



