#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

int parent[N];
int group_size[N];
vector <int> v[N];

void dsu_initialize(int n) {
    for(int i = 1; i <= n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if(parent[node] == -1) return node;
    return parent[node] = dsu_find(parent[node]);
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
    int n;
    cin >> n;

    int e = n-1;
    dsu_initialize(n);

    vector <pair <int, int>> close;
    vector <pair <int, int>> create;

    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB) {
            close.push_back({a, b});
        }
        else dsu_union_by_size(a, b);
    }

    cout << close.size() << endl;

    for(int i = 2; i <= n; i++) {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if(leaderA != leaderB) {
            create.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }

    for(int i = 0; i < close.size(); i++) {
        cout << close[i].first << " " << close[i].second << " " << create[i].first << " " << create[i].second << endl;
    }

    return 0;
}