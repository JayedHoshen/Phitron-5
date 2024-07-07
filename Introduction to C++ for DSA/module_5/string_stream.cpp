#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);

    // stringstream ss; ss << s;
    stringstream ss(s);

    // ss >> word;
    // cout << word << endl;

    int cnt = 0;
    while(ss >> word) {
        cout << word << endl;
        cnt++;
    }
    cout << "Total word = " << cnt << endl;

    return 0;
}