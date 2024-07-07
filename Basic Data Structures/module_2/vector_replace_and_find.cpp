#include <bits/stdc++.h>
using namespace std;

int main()
{    
    // replace
    // vector <int> v = {1, 2, 34, 2, 3, 4, 3, 9, 2, 3};

    // replace(v.begin(), v.end(), 2, 20); // replace all
    // replace(v.begin(), v.end()-1, 3, 30);

    // for(int i : v) cout << i << " ";
    // cout << endl;
    
    // find
    vector <int> v = {1, 2, 3, 2, 3, 4, 3, 9, 2, 3};

    // vector <int> :: iterator it;
    // it = find(v.begin(), v.end(), 3);
    auto it = find(v.begin(), v.end(), 30);

    // cout << *it << endl;
    if(it == v.end()) cout << "Not found\n";
    else cout << "Found\n";

    return 0;
}