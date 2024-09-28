#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

const int N = 1e5+5;

int parent[N];
int group_size[N];

void dsu_initialize(int n) {
    for(int i = 1; i <= n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if(parent[node] == -1) return node;
    parent[node] = dsu_find(parent[node]);
    return parent[node];
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]) {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int n, e, E;
    cin >> n >> e;

    E = e;
    dsu_initialize(n);
    vector <Edge> edgeList;

    while(e--) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    long long int totalCost = 0, totalRoad = 0;
    for(Edge child : edgeList) {
        int leaderA = dsu_find(child.u);
        int leaderB = dsu_find(child.v);

        if(leaderA != leaderB) {
            dsu_union_by_size(child.u, child.v);
            totalCost += child.w;
            totalRoad++;
        }
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(parent[i] == -1) cnt++;
    }

    if(cnt > 1) cout << "Not Possible" << endl;
    else cout << (E - totalRoad) << " " << totalCost << endl;

    return 0;
}