#include<iostream>
#include<iomanip>

using namespace std;

void pairSum(int arr[], int size)
{
    double positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) positiveCount++;
        if(arr[i] < 0) negativeCount++;
        if(arr[i] == 0) zeroCount++;
    }

    cout<<fixed << setprecision(6) << positiveCount/ size << endl;
    cout<<fixed << setprecision(6) << negativeCount/ size << endl;
    cout<<fixed << setprecision(6) << zeroCount/ size << endl;
}

int main()
{
    int size;
    cin >> size;
    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    pairSum(arr, size);
    return 0;
}