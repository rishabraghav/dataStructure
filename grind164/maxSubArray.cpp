#include<iostream>
#include<climits>

using namespace std;



int maxSubArraySum(int arr[], int n){
    int maxi = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum < 0) {
            sum = 0;
        }
        maxi = max(maxi, sum);
    }

    return maxi;
}

int main () {
    int n; 
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }

    cout<< maxSubArraySum(arr, n);
    return 0;
}