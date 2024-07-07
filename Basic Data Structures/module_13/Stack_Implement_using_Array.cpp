#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector <int> v;

    void push(int val) {
        v.push_back(val);
    }
    void pop() {
        v.pop_back();
    }
    int top() {
        return v.back();
    }
    int size() {
        return v.size();
    }
    bool empty() {
        if(v.size() == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st;

    // st.push(10);
    // cout << st.top() << endl;

    // st.push(20);
    // cout << st.top() << endl;

    // st.pop();
    // cout << st.top() << endl;

    // st.push(30);
    // st.push(40);
    // st.push(50);

    // cout << st.size() << endl;

    // st.pop();
    // if(st.empty() == false) {
    //     cout << st.top() << endl;
    // }

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) { // O(N)
        int val;
        cin >> val;
        st.push(val);
    }

    while(st.empty() == false) { // O(N)
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}