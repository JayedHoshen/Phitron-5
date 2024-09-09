#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

bool found;
bool vis[N];
bool pathVisit[N];
vector <int> adj[N];

void dfs(int parent) {
    vis[parent] = true;
    pathVisit[parent] = true;

    for(int child : adj[parent]) {
        if(pathVisit[child]) found = true;
        if(!vis[child]) dfs(child);
    }

    pathVisit[parent] = false;
}

bool bfsBool(int parent) {
    dfs(parent);
    return found;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    found = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) cout << bfsBool(i) << " ";
    }


    return 0;
}