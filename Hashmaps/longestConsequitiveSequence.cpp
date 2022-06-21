#include <iostream>
#include <vector>
using namespace std;

#include<unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    unordered_map<int, bool> p;
    for(int i = 0; i < n; i++) {
        ++p[arr[i]];
    }
	int current, length, start, maxLength = 0;
    for(int i = 0; i < n; i++) {
        current = arr[i];
        length = 1;
        
        while(p.find(current + 1) != p.end()) {
            length++;
            current += 1;
        }
        if(length > maxLength) {
            start = arr[i];
            maxLength = length;
        }
    }
    vector<int> ans;
    ans.push_back(start);
    if(maxLength > 1) {
        ans.push_back(start + maxLength - 1);
    }
    return ans;
}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}

