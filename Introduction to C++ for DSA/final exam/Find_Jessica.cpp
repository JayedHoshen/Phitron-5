#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);

    stringstream ss(s);
    int flag = 0;
    while(ss >> word) {
        if(word == "Jessica") {
            flag = 1;
            break;
        } 
    }
    
    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}