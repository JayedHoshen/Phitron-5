#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) { // O(NlogN)
        int x;
        cin >> x;
        
        v.push_back(x);

        int cur_idx = v.size() - 1;

        while(cur_idx != 0) { // O(logN)
            int parent_idx = (cur_idx - 1) / 2;
        
            if(v[parent_idx] > v[cur_idx]) swap(v[parent_idx], v[cur_idx]);
            else break;

            cur_idx = parent_idx;

        }
    }

    for(int val : v) cout << val << " ";
    cout << endl;

    return 0;
}