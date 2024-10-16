#include <bits/stdc++.h>
using namespace std;

class binary_tree {
public:
    binary_tree (int n) : ad(n + 1), valu(n + 1) {
        
    }

    void insert_edge(int u, int v) {
        ad[u].push_back(v);
        ad[v].push_back(u);
    }

    void insert(int u, int x) {
        valu[u].insert(x);
    }

    void delet(int u, int x) {
        valu[u].erase(x);
    }

    void small_val(int u, int v, int k) {
        vector<int> path = get_values(u, v);
        if (k > path.size()) {
            cout << -1 << endl;
            return;
        }
        sort(path.begin(), path.end());
        cout << path[k - 1] << endl;
    }

private:
    vector<vector<int>> ad; 
    vector<set<int>> valu; 
    vector<int> get_values(int u, int v) {
        vector<int> p_val;
        vector<bool> visited(ad.size(), false);
        vector<int> parent(ad.size(), -1);
        
        dfs(u, visited, parent);
        
        
        int c = v;
        while (c != -1) {
            p_val.insert(p_val.end(), valu[c].begin(), valu[c].end());
            c = parent[c];
        }
        return p_val;
    }

    void dfs(int node, vector<bool> &visited, vector<int> &parent) {
        visited[node] = true;
        for (int v : ad[node]) {
            if (!visited[v]) {
                parent[v] = node;
                dfs(v, visited, parent);
            }
        }
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    binary_tree  data(n);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        data.insert_edge(u, v);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string s;
        cin >> s;
        if (s == "insert") {
            int u, x;
            cin >> u >> x;
            data.insert(u, x);
        } else if (s == "delete") {
            int u, x;
            cin >> u >> x;
            data.delet(u, x);
        } else if (s == "find") {
            int u, v, k;
            cin >> u >> v >> k;
            data.small_val(u, v, k);
        }
    }

    return 0;
}