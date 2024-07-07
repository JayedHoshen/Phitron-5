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

        sort(ara, ara+n);

        int cnt = 0;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(ara[i] == ara[j]) {
                   // not complete this
                } 
            }
        }

        for(int i = 0; i < cnt; i++) cout << ara[i] << " ";
        cout << endl;
    }

    return 0;
}