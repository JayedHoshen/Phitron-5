#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector <int> v[N];
bool vis[N];

void DFS_traverse(int src) {
    vis[src] = true;

    for(int child : v[src]) {
        if(!vis[child]) DFS_traverse(child);
    }
}

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

    memset(vis, false, sizeof(vis));

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            DFS_traverse(i);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}