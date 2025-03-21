#include <bits/stdc++.h>
using namespace std;

class Edge{
public: 
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    
    // input adj list
    vector <pair<int, int>> v[n];
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    // convert adj list to edge list in weighted graph
    vector <Edge> edgeList;
    for(int i = 0; i < n; i++) {
        for(pair<int, int> child : v[i]) {
            int childEdge = child.first;
            int cost = child.second;
            edgeList.push_back(Edge(i, childEdge, cost));
        }
    }

    // print edge list with cost
    for(Edge ed : edgeList) cout << ed.u << " " << ed.v << " " << ed.w << endl;

    return 0;
}