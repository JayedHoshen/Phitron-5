#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;

        for(int j = 0; j < i; j++) sum1 += a[j];
        for(int j = i+1; j < n; j++) sum2 += a[j];

        if(sum1 == sum2) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}