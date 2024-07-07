#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i]; // O(N)

    int s = 0;
    for(int i = 0; i < n; i++) { // O(N)
        s += a[i];
    }

    cout << s << endl;
    
    return 0;
}