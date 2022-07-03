#include <iostream>
#include <vector>

using namespace std;

int diagonalDiff(int *arr[], int size){

    // 00-11    01-2    02-4
    // 10-4     11-5    12-6
    // 20-10    21-8    22--12
    int j = size - 1;
    int leftSum = 0, rightSum = 0;
    int ans;

    for(int i = 0; i < size; i++) {
        leftSum += arr[i][i];
        rightSum += arr[i][j];
        j--;
    }
    if(rightSum > leftSum) {
        ans = rightSum - leftSum;
    } else {
        ans = leftSum - rightSum;
    }
    return ans;
}

int main()
{
    int size = 3;
    int **arr = new int*[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }


     cout<<diagonalDiff(arr, size);
    

    return 0;
}