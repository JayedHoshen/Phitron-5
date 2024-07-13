#include <bits/stdc++.h>
using namespace std;

class myStack {
    public:
        list <int> l;
    
    void push(int val) {
        l.push_back(val);
    }
    void pop() {
        l.pop_back();
    }
    int top() {
        return l.back();
    }
    int size() {
        return l.size();
    }
    int empty() {
        if(l.size() == 0) return true;
        else return false;
    }

};

int main()
{
    myStack st1, st2;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st1.push(val);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        st2.push(val);
    }

    bool flag = true;
    while(!st1.empty() || !st2.empty()) {
        if(st1.top() != st2.top()) {
            flag = false;
            break;
        }
        st1.pop();
        st2.pop();
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}