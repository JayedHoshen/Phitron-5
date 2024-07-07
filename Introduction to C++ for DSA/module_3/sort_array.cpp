// nlog(n) complexity sorting
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ara[n];
    for(int i = 0; i < n; i++) cin >> ara[i];

    sort(ara, ara+n); // ascending order sort
    for(int i = 0; i < n; i++) cout << ara[i] << ' ';
    cout << endl;

    sort(ara, ara+n, greater <int> ()); // descending order sort
    for(int i = 0; i < n; i++) cout << ara[i] << ' ';

    return 0;
}