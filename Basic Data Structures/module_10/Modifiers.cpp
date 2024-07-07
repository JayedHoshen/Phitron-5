#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> myList = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // list <int> newList = {100, 200, 300, 400};
    // vector <int> v = {60, 70, 80};

    // myList = newList;
    // myList.assign(newList.begin(), newList.end());

    // myList.push_back(100);
    // myList.push_front(200);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 2), 100); 
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());

    // myList.erase(next(myList.begin(), 3));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 6));

    // replace(myList.begin(), myList.end(), 10, 0);

    // for(int val : myList) cout << val << " ";

    auto it = find(myList.begin(), myList.end(), 200);
    // cout << *it << endl;
    
    if(it == myList.end()) cout << "Not found" << endl;
    else cout << "Found" << endl;

    return 0;
}