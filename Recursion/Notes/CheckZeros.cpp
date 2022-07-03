#include <iostream>

using namespace std;

int countZeros(int n)
{
    if(n == 0) {
        return 0;
    }

    int m = n % 10;
    if(m == 0) {
        return  1 + countZeros(n/10);
    }
    return countZeros(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}