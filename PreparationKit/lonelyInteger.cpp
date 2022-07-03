#include <iostream>
#include<unordered_map>

using namespace std;

int lonelyint(int arr[], int size)
{

    unordered_map<int, int> p;

    for(int i = 0; i < size; i++) {
        ++p[arr[i]];
    }
    for(auto x : p) {
        if(x.second == 1) {
            return x.first;
        }
    }
    return 0;
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << lonelyint(arr, size);
    return 0;
}