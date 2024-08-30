#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int, vector<int>, greater<int>> pq;

    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;

        if(x == 0) {
            int val;
            cin >> val;
            pq.push(val);
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(x == 1) {
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(x == 2) {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
    }

    return 0;
}