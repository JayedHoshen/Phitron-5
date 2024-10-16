#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int val;
    cin >> val;

    int index = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] == val) index = i;
    }
    cout << index << endl;

    return 0;
}