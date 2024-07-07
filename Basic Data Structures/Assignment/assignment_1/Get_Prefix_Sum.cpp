#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    long long int pre[n];
    pre[0] = ara[0];
    for(int i = 1; i < n; i++) pre[i] = ara[i] + pre[i-1];

    for(int i = n-1; i >= 0; i--) cout << pre[i] << " ";
    cout << endl;

    return 0;
}