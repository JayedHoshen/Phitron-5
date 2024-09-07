#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector <int> v[N];
bool vis[N];
int node = 0;

void DFS_traverse(int src) {
    node++;
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

    vector <int> val;
    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            node = 0;
            DFS_traverse(i);
            val.push_back(node);
        }
    }

    sort(val.begin(), val.end());
    
    for(int va : val) cout << va << " ";
    cout << endl;

    return 0;
}