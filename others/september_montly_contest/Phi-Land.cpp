#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sz = s.size();
    for(int i = 0; i < sz; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}