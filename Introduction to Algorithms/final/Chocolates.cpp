#include <bits/stdc++.h>
using namespace std;

bool fun(vector <int> &v) {
    int sum = 0;
    for(int n : v) sum += n;

    if(sum % 2) return false;

    int target = sum / 2;
    vector <bool> dp(target+1, false);
    dp[0] = true;

    for(int num : v) {
        for(int j = target; j >= num; j--) dp[j] = dp[j] || dp[j - num];
    }
    return dp[target];
}

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        if(fun(v)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}