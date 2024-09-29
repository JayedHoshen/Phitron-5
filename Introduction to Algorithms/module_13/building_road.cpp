#include <bits/stdc++.h>
using namespace std;
 
const int N = 100005;
 
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
    int n, e;
    cin >> n >> e;
 
    dsu_initialize(n);
 
    while(e--) {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA != leaderB) dsu_union_by_size(a, b);
    }
 
    vector <int> leader;
    for(int i = 1; i <= n; i++) { 
        leader.push_back(dsu_find(i));
    }

    sort(leader.begin(), leader.end());
    leader.erase(unique(leader.begin(), leader.end()), leader.end());

    cout << leader.size() - 1 << endl;
    for(int i = 0; i < leader.size()-1; i++) {
        cout << leader[i] << " " << leader[i+1] << endl;
    }

    // // another way to solve 
    // vector <int> leaders;
    // for(int i = 1; i <= n; i++) { // first
    //     if(parent[i] == -1) leaders.push_back(i); 
    // }

    // int sz = leaders.size();
    // cout << sz - 1 << endl;
    // for(int i = 1; i < sz; i++) {
    //     cout << leaders[i-1] << " " << leaders[i] << endl;
    // }
 
    return 0;
}