#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll input;
bool dp[1000005];

bool fun(ll n) {
    if(n > input) return false;
    if(dp[n]) return dp[n];
    if(n == input) return true;
    return dp[n] = fun(n*2) || fun(n+3);
}

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        cin >> input;
        memset(dp, false, sizeof(dp));
        bool ans = fun(1);
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}