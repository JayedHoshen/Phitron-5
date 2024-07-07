#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    
    // cout << v.max_size() << endl;    
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    // v.clear();
    cout << v.size() << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    v.resize(4);
    v.resize(8, 10);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}