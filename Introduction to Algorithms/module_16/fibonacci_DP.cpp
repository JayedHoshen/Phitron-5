// Top-down approach O(N)
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e6+5;

ll dp[N]; // first step of DP

// nth fibonacci series (stating by 0) using Dynamic Programming Technique
ll fibo(ll n) {
    if(n == 0 || n == 1) return n;
    
    if(dp[n] != -1) return dp[n]; // second step of DP

    // return dp[n] = fibo(n-1) + fibo(n-2);

    ll ans = fibo(n-1) + fibo(n-2);
    
    dp[n] = ans; // third step of DP

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << fibo(n) << endl; // nth val print

    // print fibonacci series 1 to n (stating by 0)
    cout << "0 1 ";
    for(int i = 2; i <= n; i++) cout << dp[i] << " ";
    cout << endl;

    return 0;
}