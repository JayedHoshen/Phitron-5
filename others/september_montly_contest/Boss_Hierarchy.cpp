#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sz = pow(2, n) - 1;

    vector <int> v(sz);
    for(int i = 0; i < sz; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(int val : v) cout << val << " ";
    cout << endl;

    return 0;
}