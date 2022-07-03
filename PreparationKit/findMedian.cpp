#include<iostream>

using namespace std;

int median(int* arr, int size) {

    sort(arr, arr + size);

    int ans = arr[size/2];
    return ans;
}



int main() {

    int size = 5;
    int *arr = new int[size];
     for(int i = 0; i < size; i++) { 
         cin >> arr[i];
     }
    
    cout<< median(arr, size);

    // for(int i = 0; i < size; i++) {
    // cout<<arr[i] << " ";

    // }
    
    return 0;
}