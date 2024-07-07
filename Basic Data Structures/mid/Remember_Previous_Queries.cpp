#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> myList;

    int q;
    cin >> q;
    while(q--) {
        int pos, val;
        cin >> pos;

        if(pos == 0) {
            cin >> val;
            myList.push_front(val);

            cout << "L -> ";
            for(int v : myList) cout << v << " ";
            cout << endl;

            myList.reverse();
            cout << "R -> ";
            for(int v : myList) cout << v << " ";
            cout << endl;

            myList.reverse();
        }
        else if(pos == 1) {
            cin >> val;
            myList.push_back(val);

            cout << "L -> ";
            for(int v : myList) cout << v << " ";
            cout << endl;

            myList.reverse();
            cout << "R -> ";
            for(int v : myList) cout << v << " ";
            cout << endl;

            myList.reverse();
        }
        else if(pos == 2) {
            cin >> val;

            int s = myList.size();

            if(val >= s) {
                cout << "L -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
                cout << "R -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
            }
            else if(s != 0 && val == 0) {
                myList.pop_front();

                cout << "L -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
                cout << "R -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
            }
            else if(val == (s - 1)) {
                myList.pop_back();

                cout << "L -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
                cout << "R -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
            }
            else if(s > val) {
                myList.erase(next(myList.begin(), val));

                cout << "L -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
                cout << "R -> ";
                for(int v : myList) cout << v << " ";
                cout << endl;

                myList.reverse();
            }
        }
    }

    return 0;
}