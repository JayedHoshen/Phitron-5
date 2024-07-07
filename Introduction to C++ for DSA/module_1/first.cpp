#include <iostream>
#include <algorithm> // min / max
#include <utility> // swap
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;
    // cin >> a >> b >> c >> d;
    char s[100];

    cin >> a;
    getchar();
    cin.getline(s, 100);

    cout << a << endl << s << endl;

    swap(a, b);
    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});
    
    cout << a << ' ' << b << endl;
    cout << mn << ' ' << mx << endl;    

    return 0;
}