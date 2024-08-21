#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        
        int last = n % 10;
        int fast;
        
        while(n != 0) {
            fast = n % 10;
            n /= 10;
        }
        
        cout << fast+last << endl;
    }
    
    return 0;
}
