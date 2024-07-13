#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc; cin >> tc;

    while(tc--) {
        string s;
        cin >> s;

        stack <char> st;

        for(char c : s) {
            if(!st.empty()) {
                if(c == '1' && st.top() == '0') {
                    st.pop();
                }
                else {
                    st.push(c);
                }
            }
            else {
                st.push(c);
            }
        }
        
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}