#include <bits/stdc++.h>
using namespace std;

// convert function: adj list to adj matrix (weighted graph)
void convert(int n, vector <pair<int, int>> adj[]) {
    // initialize mat value -1 but primary diagonal is 0
    int mat[n][n];    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = -1;
            if(i == j) mat[i][j] = 0;
        }
    }

    // convert main theme
    for(int i = 0; i < n; i++) {
        for(pair <int, int> child : adj[i]) {
            int childNode = child.first;
            int cost = child.second;
            mat[i][childNode] = cost;
        }
    }

    for(int i = 0; i < n; i++) { // matrix output
        for(int j = 0; j < n; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    
    vector <pair<int, int>> v[n];

    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        // v[b].push_back({a, c});
    }

    convert(n, v);

    return 0;
}