#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int old_val, new_val;
    cin >> old_val >> new_val;

    replace(v.begin(), v.end(), old_val, new_val);

    for(int i : v) cout << i << " ";
    cout << endl;

    int find_val;
    cin >> find_val;

    int flag = -1;
    for(int i = 0; i < n; i++) {
        if(find_val == v[i]) {
            flag = i;
            break;
        }
    }
    cout << flag << endl;

    return 0;
}