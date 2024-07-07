#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> x = {10, 20, 30, 40};
    // vector <int> v = {1, 2};
    // v = x; // O(1) two are same otherwise O(N)
    // for(int i = 0; i < v.size(); i++) {
    //     cout << v[i] << ' ';
    // }
    // cout << endl;

    x.pop_back();
    x.pop_back();
    for(int i = 0; i < x.size(); i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}