#include <iostream>

using namespace std;
// namespace std;

int coinChangeWays(int n, int m[], int size)
{
    int arr[n + 1];
    int j = 0;

    arr[0] = 1;
    for (int i = 1; i < n + 1; i++) {
        arr[i] = 0;
    }

    while(j < size)
    {
        for (int i = 1; i < n + 1; i++)
        {
            if(i >= m[j]) {
                arr[i] += arr[i - m[j]];
            }
        }
        j++;
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    int size;
    cin >> size;
    int *m = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> m[i];
    }

    cout << coinChangeWays(n, m, size);
    return 0;
}