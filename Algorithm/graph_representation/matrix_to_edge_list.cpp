#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // input matrix
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }

    // adj matrix to edge list in unweighted graph
    vector <pair<int, int>> edgeList;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == 1 && i != j) edgeList.push_back({i, j});
        }
    }

    // print all edge
    for(pair <int, int> ed : edgeList) cout << ed.first << " " << ed.second << endl;

    return 0;
}