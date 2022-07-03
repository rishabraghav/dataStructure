#include<iostream>
#include<climits>


using namespace std;

void minMax(int arr[], int size){
    long min = INT_MAX;
    long max = INT_MIN;
    long minSum = 0, maxSum = 0;
    for(int i = 0; i < size; i++) {
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] == min) continue;
        maxSum += arr[i];
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] == max) continue;
        minSum += arr[i];
    }
    cout<< minSum << " " << maxSum;
}


int main(){
    int size = 5;
    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    minMax(arr, size);
    return 0;
}