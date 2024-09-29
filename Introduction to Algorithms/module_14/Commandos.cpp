#include <bits/stdc++.h>
using namespace std;

const int N = 105;

vector <int> adj[N];
bool vis[N];
int dis_src[N];
int dis_des[N];

void bfs(int s, int track) {
    vis[s] = true;
    if(track == 1) dis_src[s] = 0;
    else dis_des[s] = 0;

    queue <int> q;
    q.push(s);
    while(!q.empty()) {
        int par = q.front();
        q.pop();
        for(int child : adj[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                if(track == 1) dis_src[child] = dis_src[par] + 1;
                else dis_des[child] = dis_des[par] + 1;
            }
        }
    }
}

int main() {
    int tc; cin >> tc;
    for(int k = 1; k <= tc; k++) {
        int n, e;
        cin >> n >> e;
        while(e--) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
                
        int s, d;
        cin >> s >> d;
        
        for(int i = 0; i < n; i++) {
            vis[i] = false;
            dis_src[i] = -1;
        }
        bfs(s, 1);

        for(int i = 0; i < n; i++) {
            vis[i] = false;
            dis_des[i] = -1;
        }
        bfs(d, 2);

        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            int val = dis_src[i] + dis_des[i];
            mx = max(mx, val);
        }

        cout << "Case " << k << ": " << mx << endl;

        for(int i = 0; i < n; i++) adj[i].clear();
    }
    return 0;
}
