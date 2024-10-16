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
    bool dp[n+1][s+1];

    // dp: first row fill up
    dp[0][0] = true;
    for(int i = 1; i <= s; i++) {
        dp[0][i] = false;
    }

    // (1,0) cell theke fillup start
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= s; j++) {
            if(a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }

    // print dp array
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= s; j++) {
            if(dp[i][j]) cout << "T ";
            else cout << "F ";
        }
        cout << '\n';
    }

    int cnt = 0;
    for(int i = 0; i <= n; i++) if(dp[i][s]) cnt++;
    cout << cnt << endl;

    // // check 
    // if(dp[n][s]) cout << "YES" << endl;
    // else cout << "NO" << endl;

    return 0;
}