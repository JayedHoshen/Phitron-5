#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n); // O(N*logN)
    
    int q;
    cin >> q;

    while(q--) { // O(q*logN)
        int k;
        cin >> k;

        int l = 0, r = n-1;
        bool flag = false;
        while(l <= r) { // O(logN)
            int mid = (l+r) / 2;

            if(k == a[mid]) {
                flag = true;
                break;
            }

            if(k > a[mid]) l = mid + 1;
            else r = mid - 1;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}