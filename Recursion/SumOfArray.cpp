#include<iostream>

using namespace std;

int arraySum(int input[], int n, int index) {
    if(index < n) {
        return input[index] + arraySum(input, n, index + 1);
    } else {
        return 0;
    }
}

int sum(int input[], int n) {
  	int index = 0;
    return arraySum(input, n, index);
}



int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}



