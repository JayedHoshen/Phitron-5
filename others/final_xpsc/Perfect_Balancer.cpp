#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 0) {
        cout << "UNSTABLE\n";
        return 0;
    }

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    ll leftSum = 0, sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];

    for(int i = 0; i < n; i++) {
        leftSum += a[i];
        sum -= a[i];

        if(leftSum == (sum+a[i])) {
            cout << leftSum << " " << i+1 << "\n";
            return 0;
        }
    }

    cout << "UNSTABLE\n";

    return 0;
}