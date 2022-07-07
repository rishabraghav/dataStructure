#include<iostream> 
using namespace std;

int interpolation(int arr[], int key, int n){
    int pos;
    int low = 0;
    int high = n - 1;
    pos = low +((key - arr[low]) * (high - low)) / (arr[high] - arr[low]);
    return pos;
}




int main (){
    int n;
    cin >> n;
    int key;
    cin >> key;
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<< interpolation(arr, key, n);

    return 0;
}