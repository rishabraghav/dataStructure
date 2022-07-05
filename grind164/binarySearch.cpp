#include<iostream>

using namespace std;


int binarySearchHelper(int arr[], int target, int begin, int end) {
   if(end >= begin) {
       int mid = begin + (end - begin) / 2;

       if(arr[mid] == target) {
           return mid;
       } else if(arr[mid] > target) {
           return binarySearchHelper(arr, target, begin, mid - 1);
       } else {
           return binarySearchHelper(arr, target, mid + 1, end);
       }
   }

   return -1;
}

int binarySearch(int arr[], int target, int n) {
    
    return binarySearchHelper(arr, target, 0, n - 1);

}


int main () 
{   
    int n;
    cin >> n;
    int target;
    cin >> target;
    int *arr = new int[n];

    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }
    cout<< binarySearch(arr, target, n);
    return 0;
}