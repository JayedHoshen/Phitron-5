#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll pain(ll n) {
    ll pair = n/2;
    ll sum = pair * (pair+1);
    if(n%2 == 1)
    {
        sum += (pair+1);
    }
    return sum;
}

ll range(long left, ll right) {
    return pain(right) - pain(left-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, tc;
    cin >> n >> tc;
    
    while(tc--) {
        ll l, r;
        cin >> l >> r;
        cout << range(l, r) << '\n';
    }
}