#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

bool vis[N];
bool found;
int parentArray[N];
vector <int> adj[N];

void bfs(int s) {
    queue <int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : adj[par]) {
            if(vis[child] == true && parentArray[par] != child) {
                found = true;
            } 

            if(vis[child] == false) {
                vis[child] = true;
                parentArray[child] = par;
                q.push(child);
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
    memset(parentArray, -1, sizeof(parentArray));
    found = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) bfs(i);
    }

    if(found) cout << "Cycle detected" << endl;
    else cout << "Cycle not detected" << endl;

    return 0;
}