#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];

/* // initialize matrix unweighted graph
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            mat[i][j] = 0;
            if(i == j) mat[i][j] = 1;
        }
    }        
    // input edge list in unweighted graph
    while(e--) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        // mat[b][a] = 1; // undirected not use
    }
*/

    // initialize matrix weighted graph
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            mat[i][j] = -1;
            if(i == j) mat[i][j] = 0;
        }
    }

    // input edge list in weighted graph
    while(e--) {
        int a, b, c;
        cin >> a >> b >> c;
        mat[a][b] = c;
        // mat[b][a] = c; // undirected not use
    }

    // output matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}