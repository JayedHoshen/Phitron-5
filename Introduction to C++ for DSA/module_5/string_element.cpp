#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // ith element
    cout << s[0] << endl;
    cout << s.at(1) << endl;

    // last index
    cout << s[s.size()-1] << endl;
    cout << s.back() << endl;

    // first index
    cout << s[0] << endl;
    cout << s.front() << endl;

    return 0;
}