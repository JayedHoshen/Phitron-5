#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    int *ara = new int[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    sort(ara, ara+n, greater <int> ());

    return ara;
}

int main()
{
    int n;
    cin >> n;

    int *ar = sort_it(n);
    for(int i = 0; i < n; i++) cout << ar[i] << ' ';
    cout << endl;

    return 0;
}