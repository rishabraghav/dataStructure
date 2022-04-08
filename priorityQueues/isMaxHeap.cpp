#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n) {
    int lci, rci;
    for(int i = 0; i < n; i++) {
        if(2*i + 1 < n) {
            lci = 2 * i + 1;
        } else {
            continue;
        }
        if(2*i + 2 < n) {
            rci = 2 * i + 2;
        }
        
        if(arr[i] < arr[lci]) {
            return false;
        }
        if(arr[i] < arr[rci]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}