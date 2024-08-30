#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set <int> s;
    while(n--) {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    
    // cout << s.count(10) << endl; // O(logN)

    // if(s.count(100)) cout << "Yes" << endl;
    // else cout << "No" << endl;

    for(auto it = s.begin(); it != s.end(); it++) cout << *it << endl;

    return 0;
}