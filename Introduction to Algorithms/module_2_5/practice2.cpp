#include <bits/stdc++.h>
using namespace std;

vector <int> v[10005];
bool vis[10005]; 

vector <int> BFS_traverse(int l) {
    queue <pair<int, int>> q;
    q.push({0, 0});
    vis[0] = true;

    vector <int> lev;
    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;

        if(level == l) {
            lev.push_back(par);
        } 

        for(int child : v[par]) {
            if(vis[child] == false) {
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    return lev;
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

    int l;
    cin >> l;
 
    vector <int> ans = BFS_traverse(l);

    // reverse(ans.begin(), ans.end());
    sort(ans.begin(), ans.end(), greater<int>());

    for(int val : ans) cout << val << " ";

    return 0;
}