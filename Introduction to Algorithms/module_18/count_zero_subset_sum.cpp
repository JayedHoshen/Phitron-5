// count zero in subset_sum 
/*
5
0 0 0 0 7
7
1 0 0 0 0 0 0 0 
2 0 0 0 0 0 0 0
4 0 0 0 0 0 0 0
8 0 0 0 0 0 0 0
16 0 0 0 0 0 0 0
16 0 0 0 0 0 0 16 
*/

#include <bits/stdc++.h>
using namespace std;

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

    // dp declare
    int dp[n+1][s+1];

    // dp: first row fill up
    dp[0][0] = 1;
    for(int i = 1; i <= s; i++) {
        dp[0][i] = 0;
    }

    // (1,0) cell theke fillup start
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= s; j++) {
            if(a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }

    // print zero in subset_sum 
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= s; j++) cout << dp[i][j] << " ";
        cout << endl;
    }

    return 0;
}