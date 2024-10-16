// Equal sum partition with subset sum 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    } 

    // if half sum possible sum of equal possible
    if(sum % 2) cout << "NO\n";
    else {
        int s = sum / 2;

        // subset_sum apply
        bool dp[n+1][s+1];

        dp[0][0] = true;
        for(int i = 1; i <= s; i++) dp[0][i] = false;
        
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= s; j++) {
                if(a[i-1] <= j) dp[i][j] = dp[i-1][j-a[i-1]] || dp[i-1][j];
                else dp[i][j] = dp[i-1][j];
            }
        }
        if(dp[n][s]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}