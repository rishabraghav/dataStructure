#include<iostream>

using namespace std;


int stockProfit(int arr[], int size) {
    int min = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < size; i++) {
      if(min > arr[i]) {
          min = arr[i];
      }
      if(maxProfit < arr[i] - min) {
          maxProfit = arr[i] - min;
      }
        
    }
    return maxProfit;
}


int main () {
    int n;
    cin>> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    cout<< stockProfit(arr, n);
    return 0;
}