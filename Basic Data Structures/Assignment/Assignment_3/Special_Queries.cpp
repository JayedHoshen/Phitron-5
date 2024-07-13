#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue <string> q;

    int tc;
    cin >> tc;

    while(tc--) {
        int opt;
        cin >> opt;

        if(opt == 0) {
            string name;
            cin >> name;
            q.push(name);
        }
        else if(opt == 1) {
            if(q.empty()) cout << "Invalid" << endl;
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}