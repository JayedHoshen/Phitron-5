#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i]; // O(n)

    sort(a, a+n); // O(nlogn)

    int key;
    cin >> key;

    int cnt = 0;
    int L = 0, R = n-1;
    while(L <= R) { // O(logn)
        int mid = (L+R) / 2;
        
        if(a[mid] == key) cnt++;

        if(key > mid) L = mid + 1;
        else R = mid - 1;
    }
   
    if(cnt > 1) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}