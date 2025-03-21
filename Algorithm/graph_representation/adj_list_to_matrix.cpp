#include <bits/stdc++.h>
using namespace std;

// convert function: adj list to adj matrix (unweighted graph)
void convert(int n, vector<int> adj[]) {
    // initialize mat value 0 but primary diagonal is 1
    int mat[n][n];    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = 0;
            if(i == j) mat[i][j] = 1;
        }
    }

    // convert main theme
    for(int i = 0; i < n; i++) {
        for(int child : adj[i]) mat[i][child] = 1;
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
    
    vector <int> v[n];

    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        // v[b].push_back(a);
    }

    convert(n, v);

    return 0;
}