// minimum subset sum difference
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // array input and calculated sum of array
    int a[n], s = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    // apply subset sum
    bool dp[n+1][s+1];
    dp[0][0] = true;
    for(int i = 1; i <= s; i++) dp[0][i] = false;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= s; j++) {
            if(a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
            else dp[i][j] = dp[i-1][j];
        }
    }

    // all subset-sum push in vector
    vector <int> v;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= s; j++) {
            if(dp[i][j] == 1) v.push_back(j);
        }
    }

    // calculate minimum sum
    int ans = INT_MAX;
    for(int val : v) {
        int s1 = val;
        int s2 = s - s1;
        ans = min(ans, abs(s1-s2));
    }
    cout << ans << endl;

    return 0;
}