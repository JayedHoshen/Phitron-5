#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector <int> adj[N];
bool vis[N];
int parent[N];

void bfs(int src) {
    vis[src] = true;

    queue <int> q;
    q.push(src);

    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : adj[par]) {
            if(!vis[child]) {
                vis[child] = true;
                q.push(child);
                parent[child] = par;
            }
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
    memset(parent, -1, sizeof(parent));

    bfs(1);

    int x = n;
    vector <int> path;
    while(x != -1) {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());

    if(path.size() == 1) cout << "IMPOSSIBLE" << endl;
    else {
        cout << path.size() << endl;
        for(int val : path) cout << val << " ";
        cout << endl;
    }    
    
    return 0;
}