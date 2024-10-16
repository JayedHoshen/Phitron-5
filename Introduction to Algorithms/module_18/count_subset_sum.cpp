// count subset_sum 
#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int subset_sum(int n, int a[], int s) {
    if(n == 0) {
        if(s == 0) return 1;
        else return 0;
    }

    if(dp[n][s] != -1) return dp[n][s];

    if(a[n-1] <= s) {
        return dp[n][s] = subset_sum(n-1, a, s-a[n-1]) + subset_sum(n-1, a, s);
    }
    else return dp[n][s] = subset_sum(n-1, a, s);
}

int main()
{
    // input array size
    int n;
    cin >> n;

    // array input
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    // targeted sum input
    int s;
    cin >> s;

    // top_down approach
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= s; j++) dp[i][j] = -1;
    }

    cout << subset_sum(n, a, s) << endl;


    // // bottom-up approach
    // // dp declare
    // int dp[n+1][s+1];

    // // dp: first row fill up
    // dp[0][0] = 1;
    // for(int i = 1; i <= s; i++) {
    //     dp[0][i] = 0;
    // }

    // // (1,0) cell theke fillup start
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 0; j <= s; j++) {
    //         if(a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
    //         else dp[i][j] = dp[i-1][j];
    //     }
    // }

    // // count subset_sum print
    // cout << dp[n][s] << endl;

    return 0;
}