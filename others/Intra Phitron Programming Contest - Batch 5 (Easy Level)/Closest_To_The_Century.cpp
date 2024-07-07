#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n;
        cin >> n;
        
        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        int mx = INT_MIN;
        for(int i = 0; i < n; i++) mx = max(mx, ara[i]);
        cout << mx << endl;
    }

    return 0;
}