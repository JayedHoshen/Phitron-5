#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // adj list input
    vector <int> v[n];
    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    // adj list to edge list unweighted graph
    vector <pair<int, int>> edgeList;
    for(int i = 0; i < n; i++) {
        for(int child : v[i]) edgeList.push_back({i, child});
    }

    for(pair <int, int> ed : edgeList) cout << ed.first << " " << ed.second << endl;

    return 0;
}