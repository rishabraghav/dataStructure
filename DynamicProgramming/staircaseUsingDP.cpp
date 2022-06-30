#include <iostream>

using namespace std;


//tabulation
int staircaseUsingDp(int n) {
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i < n + 1; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

//memoization
int staircase1Helper(int *dp, int n){
    if(dp[n] != -1) {
        return dp[n];
    }
    if(n == 0) {
        return 1;
    }
    if(n == 1 || n == 2) {
        dp[n] = n;
    }

    dp[n] = staircase1Helper(dp, n - 1) + staircase1Helper(dp, n - 2) + staircase1Helper(dp, n - 3);
    return dp[n];
}
int staircase1(int n)
{
    int *dp = new int[n + 1];
    for(int i = 0; i < n + 1; i++) {
        dp[i] = -1;
    }
    return staircase1Helper(dp, n);

}

int main()
{
    cout << staircaseUsingDp(5);
    return 0;
}