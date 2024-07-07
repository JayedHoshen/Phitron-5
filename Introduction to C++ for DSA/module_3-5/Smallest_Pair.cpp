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

        int mn = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                int op = ara[i] + ara[j] + j - i;
                mn = min(mn, op);
            }
        }

        cout << mn << endl;
    }

    return 0;
}