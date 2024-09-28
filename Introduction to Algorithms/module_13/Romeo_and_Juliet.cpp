#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector <int> adj[N];
bool vis[N];
int dis[N];

void bfs(int src) {
    vis[src] = true;
    dis[src] = 0;

    queue <int> q;
    q.push(src);

    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : adj[par]) {
            if(!vis[child]) {
                vis[child] = true;
                q.push(child);
                dis[child] = dis[par] + 1;
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
    memset(dis, -1, sizeof(dis));

    int src, d, k;
    cin >> src >> d >> k;

    bfs(src);

    if(dis[d] != -1 && dis[d] <= k*2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}