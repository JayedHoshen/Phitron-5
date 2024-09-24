#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int parent[N];
int group_size[N];

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

void dsu_initialize(int n) {
    for(int i = 0; i < n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
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
    int n, e;
    cin >> n >> e;

    vector <Edge> edgeList;
    dsu_initialize(n);

    while(e--) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;
    for(Edge val : edgeList) {
        int leaderA = dsu_find(val.u);
        int leaderB = dsu_find(val.v);
        if(leaderA == leaderB) continue;
        else {
            dsu_union_by_size(val.u, val.v);
            totalCost += val.w;
        }
    }

    cout << totalCost << endl;

    return 0;
}