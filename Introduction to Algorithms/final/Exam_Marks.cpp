#include <bits/stdc++.h>
using namespace std;

bool fun(int n, int k, vector <int> &v) {
    int target = 1000 - k;
    if(target == 0) return true;

    vector <bool> dp(target+1, false);
    dp[0] = true;

    for(int m : v) {
        for(int i = target; i >= m; i--) if(dp[i-m]) dp[i] = true;
    }
    return dp[target];
}

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        if(fun(n, k, v)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}