#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <string> myList;

    string val;

    while(true) {
        cin >> val;
        if(val == "end") break;
        myList.push_back(val);
    }

    int q;
    cin >> q;

    string op, v;
    auto cur = myList.begin();

    while(q--) {
        cin >> op;

        if(op == "visit") {
            cin >> v;
            auto it = find(myList.begin(), myList.end(), v);
            if(it != myList.end()) {
                cur = it;
                cout << *cur << endl;
            }
            else cout << "Not Available" << endl;
        }
        else if(op == "next") {
            if(cur != myList.end() && next(cur) != myList.end()) {
                cur++;
                cout << *cur << endl;
            }
            else cout << "Not Available" << endl;
        }
        else if(op == "prev") {
            if(cur != myList.begin()) {
                cur--;
                cout << *cur << endl;
            }
            else cout << "Not Available" << endl;
        }
    }

    return 0;
}