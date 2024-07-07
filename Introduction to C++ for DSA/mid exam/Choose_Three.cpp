#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n, s;
        cin >> n >> s;

        int ara[n];
        for(int i = 0; i < n; i++) cin >> ara[i];

        int f = 0;
        for(int i = 0; i < (n-2); i++) {
            for(int j = i+1; j < (n-1); j++) {
                for(int k = j+1; k < n; k++) {
                    if((ara[i]+ara[j]+ara[k]) == s) {
                        f = 1;
                        break;
                    } 
                }
            }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}