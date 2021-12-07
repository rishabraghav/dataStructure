#include<iostream>

using namespace std;

bool check(int input[], int size, int x, int index) {
    if(index < size) {
        if(x == input[index]) {
            return true;
        } else {
            return check(input, size, x, index + 1);
        }
    } else {
        return false;
    }
}

bool checkNumber(int input[], int size, int x) {
	int index = 0;
    return check(input, size, x, index);
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
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}



