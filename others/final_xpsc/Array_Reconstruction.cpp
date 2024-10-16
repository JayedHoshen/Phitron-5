#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n-2; i++) cin >> a[i];

        ll s = 0;
        for(int i = 0; i < n-2; i++) s += a[i];

        ll sum;
        cin >> sum;

        ll result = sum - s;

        if(result < 0) cout << "0\n";
        else cout << result+1 << "\n";
    }

    return 0;
}