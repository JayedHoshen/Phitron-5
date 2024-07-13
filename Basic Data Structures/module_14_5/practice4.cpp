#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q, newQ;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    stack <int> st, newSt; // copy stack
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    newSt = st;

    while(!newSt.empty()) { // copy queue
        newQ.push(newSt.top());
        newSt.pop();
    }
    
    while(!newQ.empty()) {
        cout << newQ.front() << " ";
        newQ.pop();
    }
    cout << endl;

    return 0;
}