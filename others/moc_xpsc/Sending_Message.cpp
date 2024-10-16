#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;  
    while(cin >> s1 >> s2) {
        int n = s1.length();
        int m = s2.length();

        int j = 0;

        for (int i = 0; i < n; i++) {
            if (j < m && s1[i] == s2[j]) j++;
        }

        if (j == m) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }

    return 0;
}