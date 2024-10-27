#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;

        int a[n+5][n+5];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin >> a[i][j];
        }

        int sum = 0, cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n-max(i,j); k++) {
                    if(i+k < n && j+k < n) cnt++;
                    sum += a[i][j];
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}