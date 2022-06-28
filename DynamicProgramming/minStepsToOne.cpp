#include<iostream>

using namespace std;


int minStep(int arr[], int n) {
    for( int i = 2; i < n + 1; i++) {
        int min = arr[ i - 1];
        if(i % 3 == 0) {
            if(min > arr[i/3]) {
                min = arr[i / 3];
            }
        }

        if(i % 2 == 0) {
            if(min > arr[i/2]) {
                min = arr[i / 2];
            }
        }
        arr[ i ] = min + 1;
    }
    return arr[n];
}



int main() {
    int n;
    cin>> n;
    int arr[n + 1];
    for(int i = 0; i < n + 1; i++) {
        arr[i] = 0;
    }
    
    cout << minStep(arr, n) << endl;

    return 0;
}