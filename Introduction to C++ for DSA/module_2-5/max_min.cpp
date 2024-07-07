#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    } 

    cout << "Maximum = " << mx << endl;
    cout << "Minimum = " << mn << endl;

    return 0;
}