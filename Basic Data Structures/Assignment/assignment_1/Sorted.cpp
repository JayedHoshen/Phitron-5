#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector <int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        vector <int> v1(v);
        sort(v1.begin(), v1.end());

        if(v1 == v) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}