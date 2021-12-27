#include<iostream>

using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start]; 
    int count = 0;
    
    for(int i = start + 1; i <= end; i++) if(arr[i] <= pivot) count++;
    
    int pivotIndex = start + count;
    
  	int temp = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start] = temp;
    
    int i = start;
    int j = end;
    
    while(i <= pivotIndex && j >= pivotIndex) {
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
     return pivotIndex;
}

void quickSortTemp(int input[], int start, int end) {
    if(start < end) {
        int pivot = partition(input, start, end);
        
        quickSortTemp(input, start, pivot - 1);
        quickSortTemp(input, pivot + 1, end);
    }
}

void quickSort(int input[], int size) {
 	int start = 0;
    int end = size - 1;
    
    quickSortTemp(input, start, end);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}

