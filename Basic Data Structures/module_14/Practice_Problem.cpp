#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue <int> q1;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q1.push(val);
    }

    int m;
    cin >> m;

    queue <int> q2;
    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q2.push(val);
    }

    queue <int> q;
    q = q1;

    while(!q2.empty()) {
        q.push(q2.front());
        q2.pop();
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}