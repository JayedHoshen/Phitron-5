#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    reverse(v.begin(), v.end());

    for(int val : v) cout << val << " ";
    cout << endl;

    return 0;
}