#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }

    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;

    delete[] a;

    return 0;
}