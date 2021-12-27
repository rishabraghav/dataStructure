#include<iostream>

using namespace std;

void partition(int input, int start, int end) {
    int pivot = input[start];
    
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

