#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // matrix input
    int mat[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> mat[i][j];
    }

 /*   // convert matrix to adj list (unweighted graph)
    vector <int> v[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] == 1 && i != j) {
                v[i].push_back(j);
            }
        }
    }
*/

    // convert matrix to adj list (weighted graph)
    vector <pair<int, int>> v[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] > 0) { // INT_MIN / -1e18 diye check kora jabe
                v[i].push_back({j, mat[i][j]});
            }
        }
    }

    // print adj list 
    for(int i = 0; i < n; i++) {
        cout << i << "-> ";
        // for(int child : v[i]) cout << child << " "; // unweighted
        for(pair<int, int> child : v[i]) cout << "{" << child.first << ", " << child.second << "}, ";
        cout << endl;
    }

    return 0;
}