#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5};
    vector <int> v2 = {10, 20, 30};
        
    // v.insert(v.begin()+2, 10);// single value assign
    v.insert(v.begin()+v.size(), v2.begin(), v2.end()); // assign another vector

    for(int a : v) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}