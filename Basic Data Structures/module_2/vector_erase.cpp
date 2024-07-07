#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5};

    // v.erase(v.begin()+3); // single value delete
    v.erase(v.begin()+2, v.end()-1); // multiple value delete

    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}