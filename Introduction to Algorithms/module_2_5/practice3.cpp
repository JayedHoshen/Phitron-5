#include <bits/stdc++.h>
using namespace std;

vector <int> v[10005];

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int node;
    cin >> node;

    int cnt = 0;
    for(int val : v[node]) cnt++;

    cout << cnt << endl; 

    return 0;
}