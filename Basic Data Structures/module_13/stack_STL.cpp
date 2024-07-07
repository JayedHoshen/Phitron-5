#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> st;

    // st.push(10);
    // st.pop();

    // cout << st.top() << endl;
    // cout << st.size() << endl;
    // cout << st.empty() << endl; // return 1 = empty, 0 = not empty

    int n;
    cin >> n;    
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}