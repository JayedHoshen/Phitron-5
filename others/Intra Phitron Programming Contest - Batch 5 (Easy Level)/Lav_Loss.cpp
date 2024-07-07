#include <bits/stdc++.h>
using namespace std;

int main()
{
    double z, y, x, s1, s2;
    cin >> x >> y >> z;

    s1 = (100*x) / (100-y);
    s2 = (s1*z) / 100;

    cout << fixed << setprecision(2) << (s1 + s2) << endl;

    return 0;
}