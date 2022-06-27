#include <iostream>
using namespace std;

#include<unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {
    unordered_map<int, int> p;
    int d, pair = 0;
    for(int i = 0; i < n; i++) {
        if(k > arr[i]) {
            d = arr[i] + k;
        } else {
            d = arr[i] - k;
        }
        
        if(p.find(d) != p.end()) {
            pair += p[d];
        }
        ++p[arr[i]];
    }
    return pair;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}