#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        string s;
        cin >> s;

        int n = s.size();
        int v = 0, c = 0, d = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') v++;
            else if(s[i] >= '0' && s[i] <= '9') d++;
            else c++;

        }
    }

    return 0;
}