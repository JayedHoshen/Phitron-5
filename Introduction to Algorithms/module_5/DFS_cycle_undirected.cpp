#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool found;
bool vis[N];
int parentArray[N];
vector<int> adj[N];

void dfs(int parent) {
    vis[parent] = true;

    for(int child : adj[parent]) {
        if(vis[child] == true && parentArray[parent] != child) {
            found = true;
            // cout << parent << " " << child << " " << parentArray[parent] << endl;
        }

        if(vis[child] == false) {
            parentArray[child] = parent;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    found = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) dfs(i);
    }

    if(found) cout << "Cycle detected" << endl;
    else cout << "Cycle not detected" << endl;

    return 0;
}