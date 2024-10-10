#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector <int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        vector <int> v1 = v;
        sort(v1.begin(), v1.end(), greater <int>());

        int first, second;
        for(int i = 0; i < n; i++) {
            if(v[i] == v1[0]) first = i;
            if(v[i] == v1[1]) second = i;
        }

        if(first < second) cout << first << " " << second << endl;
        else cout << second << " " << first << endl;
    }

    return 0;
}