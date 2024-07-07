#include <bits/stdc++.h> // O(NlogN) = 10^5
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i]; // O(N)

    sort(ara, ara+n); // O(NlogN)

    while(q--) { // O(q*logN)
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        bool flag = false;
        while(l <= r) { // O(logN)
            int mid = (l+r) / 2;

            if(x == ara[mid]) {
                flag = true;
                break;
            }

            if(x > ara[mid]) l = mid + 1;
            else r = mid - 1;
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;
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
        int x;
        cin >> x;

        bool flag = false;
        for(int i = 0; i < n; i++) {
            if(ara[i] == x) {
                flag = true;
                break;
            }
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}
*/