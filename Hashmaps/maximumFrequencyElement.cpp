#include <iostream>
using namespace std;
#include<unordered_map>

int highestFrequency(int arr[], int n) {
    unordered_map<int, int> p;
    int max = 0;
    int ans;
    
    for(int i = 0; i < n; i++) {
        p[arr[i]] += 1;
        if(p[arr[i]] > max) {
            max = p[arr[i]];
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(p[arr[i]] == max) {
            ans = arr[i];
            break;
        } 
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}