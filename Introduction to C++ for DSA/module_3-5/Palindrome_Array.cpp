#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    int i = 0, j = n-1, f = 1;
    while(i<j) {
        if(ara[i] != ara[j]) {
            f = 0;
        }
        i++;
        j--;
    }

    if(f) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}