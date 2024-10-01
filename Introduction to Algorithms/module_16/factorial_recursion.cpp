#include <bits/stdc++.h>
using namespace std;

// factorial recursive function (DP is not apply) O(N)
int fact(int n) {
    if(n == 0) return 1;
    int chotoFactorial = fact(n-1);
    return chotoFactorial * n;
}

int main()
{
    int n;
    cin >> n;

    cout << "Recursive solution: " << fact(n) << endl;

    // factorial loop solution
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Loop Solution: " << fact << endl;

    return 0;
}