#include <iostream>
#include "solution.h"

using namespace std;

int makeHeap(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int childIndex = i;
        int parentIndex = (childIndex - 1) / 2;
        
        while(childIndex > 0 && arr[childIndex] < arr[parentIndex]) {
            int temp = arr[childIndex];
            arr[childIndex] = arr[parentIndex];
            arr[parentIndex] = temp;
            
            childIndex = parentIndex;
            parentIndex = (childIndex - 1) / 2;
        }
    }
    return *arr;
}

int sortByRemoveMin(int arr[], int n) {
    int min = 0;
    for(int i = n - 1;  i > 0; i--) {
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
        *arr = makeHeap(arr, i);
    }
    return *arr;
}

void heapSort(int arr[], int n) {
    *arr = makeHeap(arr , n);
    *arr = sortByRemoveMin(arr, n);
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}