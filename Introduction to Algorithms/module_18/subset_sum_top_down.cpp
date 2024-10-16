#include <bits/stdc++.h>
using namespace std;

// apply dp
int dp[1005][1005];

// subset sum function created
bool subset_sum(int n, int a[], int s) {
    // base case
    if(n == 0) {
        if(s == 0) return true;
        else return false;
    }

    // dp condition check
    if(dp[n][s] != -1) return dp[n][s];

    // newa jabe: 2 ta option
    if(a[n-1] <= s) {
        bool op1 = subset_sum(n-1, a, s - a[n-1]);
        bool op2 = subset_sum(n-1, a, s);
        return dp[n][s] = op1 || op2;
    }   
    // newa jabena: 1 ta option
    else {
        return dp[n][s] = subset_sum(n-1, a, s);
    }
}

int main()
{
    // array size input
    int n;
    cin >> n;

    // array input
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    // needed sum input
    int s;
    cin >> s;

    // dp initialize
    memset(dp, -1, sizeof(dp));

    // function call
    if(subset_sum(n, a, s)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}