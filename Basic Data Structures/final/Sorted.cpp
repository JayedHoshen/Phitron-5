#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        set <int> s;

        int n;
        cin >> n;
        while(n--) {
            int x;
            cin >> x;
            s.insert(x);
        }

        for(int val : s) cout << val << " ";
        cout << endl;
    }

    return 0;
}