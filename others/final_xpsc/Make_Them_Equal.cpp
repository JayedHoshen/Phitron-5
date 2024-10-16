#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;

        string s1, s2;
        cin >> s1 >> s2;
        
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s1[i] != s2[i]) cnt++;
        }

        if(cnt <= k) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}