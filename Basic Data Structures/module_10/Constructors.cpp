#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list <int> myList; // type 1
    // list <int> myList(10); // type 2
    // list <int> myList(10, 5); // type 3
    // // cout << myList.front() << endl; // type 3
    // list <int> list2 = {1, 2, 3, 4, 5}; // type 4
    // list <int> myList(list2); // type 4
    // int a[5] = {10, 20, 30, 40, 50}; // type 5
    // list <int> myList(a, a+5); // type 5
    vector <int> v = {100, 200, 300, 400, 500}; // type 5
    list <int> myList(v.begin(), v.end()); // type 5

    // for(auto it = myList.begin(); it != myList.end(); it++) cout << *it << " "; // long way print
    for(int val : myList) cout << val << " "; // short curt 
    cout << endl;

    cout << myList.size() << endl;

    return 0;
}