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

int main()
{
    int n;
    cin >> n;

    // input matrix 
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }

    // adj matrix to edge list in weighted graph
    vector <Edge> edgeList;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] > 0) edgeList.push_back(Edge(i, j, mat[i][j]));
        }
    }

    // print all edge with cost
    for(Edge ed : edgeList) cout << ed.u << " " << ed.v << " " << ed.w << endl;

    return 0;
}