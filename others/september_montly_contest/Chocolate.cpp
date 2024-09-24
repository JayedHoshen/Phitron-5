#include <bits/stdc++.h>
using namespace std;

int s;
void cho(int n) {
    if(n == 0) return;
    s += n;
    cho(n/3);
}

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        int num;
        cin >> num;

        s = 0;
        cho(num/5);

        if(num > 5) cout << s << endl;
        else if(num == 5) cout << 1 << endl;
    }

    return 0;
}