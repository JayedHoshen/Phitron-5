#include <bits/stdc++.h>
#define ll long long int
const long long int INF = 1e18;
using namespace std;

class Edge {
public: 
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    ll n, e;
    cin >> n >> e;

    ll dis[n+5];
    vector <Edge> EdgeList;

    while(e--) {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
 
    int s, q;
    cin >> s >> q;

    while(q--) {
        int d; cin >> d;

        for(int i = 1; i <= n; i++)  dis[i] = INF;
    
        dis[s] = 0;
        for(int i = 1; i <= n; i++) {
            for(Edge ed : EdgeList) {
                int u, v, c;
                u = ed.u;
                v = ed.v;
                c = ed.c;
                if(dis[u] < INF && dis[u] + c < dis[v]) dis[v] = dis[u] + c;
            }
        }

        bool cycle = false;
        for(Edge ed : EdgeList) {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if(dis[u] < INF && dis[u] + c < dis[v]) {
                cycle = true;
                break;
            }
        }

        if(cycle) {
            cout << "Negative Cycle Detected" << endl;
            break;
        } 

        if(dis[d] == INF) cout << "Not Possible" << endl;
        else cout << dis[d] << endl;
    }   

    return 0;
}