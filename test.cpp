#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll input;
bool fun(ll n) {
    if(n > input) return false;
    if(n == input) return true;
    return fun(n*10) || fun(n*20);
}

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        cin >> input;
        bool ans = fun(1);
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}