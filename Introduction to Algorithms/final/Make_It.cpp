#include <bits/stdc++.h>
using namespace std;

bool fun(int n) {
    if(n == 1) return true;

    vector <bool> dp(n+1, false);
    dp[1] = true;

    for(int i = 1; i <= n; i++) {
        if(dp[i]) {
            if(i+3 <= n) dp[i+3] = true;
            if(i*2 <= n) dp[i*2] = true;
        }
    }
    return dp[n];
}

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        
        if(fun(n)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}