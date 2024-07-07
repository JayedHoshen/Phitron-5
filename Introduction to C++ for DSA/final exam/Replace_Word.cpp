#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        string s, str;
        cin >> s >> str;
        
        int len = str.size();
        while(s.find(str) < s.size()) {
            s.replace(s.find(str), len, "#");
        }

        cout << s << endl;
    }

    return 0;
}