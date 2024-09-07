#include <bits/stdc++.h>
using namespace std;

vector <int> v[10005];
bool vis[10005]; 

void BFS_traverse(int src, int des) {
    queue <pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;

    bool found = false;

    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;

        if(par == des) {
            cout << level << endl;
            found = true;
        } 

        for(int child : v[par]) {
            if(vis[child] == false) {
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    if(!found) cout << "-1" << endl;
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

    int q;
    cin >> q;
    while(q--) {
        int src, des;
        cin >> src >> des;

        memset(vis, false, sizeof(vis));

        BFS_traverse(src, des);
    }

    return 0;
}