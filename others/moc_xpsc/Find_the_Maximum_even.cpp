#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n+5];
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx = INT_MIN;
    for(int i = 0; i <= n; i++) {
        for(int j = i+1; j < n; j++) {
            int sum = a[i] + a[j];
            if(sum%2==0) mx = max(mx, sum);
        } 
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i]%2 == 0) mx = max(mx, a[i]);
    }

    cout << mx << endl;

    return 0;
}