#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    ll ans = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (v[i] >= v[i + 1]) v[i] = v[i + 1] - 1;

        if (v[i] < 0) v[i] = 0;

        ans += v[i];
    }
    cout << ans << endl;
    
    return 0;
}