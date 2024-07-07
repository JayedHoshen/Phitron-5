#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int pre[n];
    pre[0] = 0;
    for(int i = 1; i < n; i++) pre[i] = a[i-1] + pre[i-1];

    for(int i = 0; i < n; i++) cout << pre[i] << " ";
    cout << endl;

    return 0;
}