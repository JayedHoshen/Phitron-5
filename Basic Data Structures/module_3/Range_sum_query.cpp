#include <bits/stdc++.h> // apply prefix sum
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;

    long long int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    long long int pre[n];
    pre[0] = ara[0];
    for(int i = 1; i < n; i++) pre[i] = ara[i] + pre[i-1];

    while(q--) {
        long long int l, r;
        cin >> l >> r;

        l--; r--;

        long long int sum = 0;
        if(l == 0) sum = pre[r];
        else sum = pre[r] - pre[l-1];

        cout << sum << endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    while(q--) {
        int l, r;
        cin >> l >> r;

        l--; r--;
        int sum = 0;
        for(int i = l; i <= r; i++) {
            sum += ara[i];
        }

        cout << sum << endl;
    }

    return 0;
}
*/