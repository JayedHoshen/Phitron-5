#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    for(string val : v) {
        if(val[0] >= 'a' && val[0] <= 'z') val[0] = val[0] - 32;
        cout << val << endl;
    }

    return 0;
}