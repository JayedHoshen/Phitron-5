#include <bits/stdc++.h>
using namespace std;

char mat[25][25];
bool vis[25][25];
int n, m, cellNo;

vector <pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj) {
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}

void dfs(int si, int sj) {
    vis[si][sj] = true;
    cellNo++;
    
    for(int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != '#') {
            dfs(ci, cj);
        }
    }
}

int main() {
    int tc; 
    cin >> tc;
    for(int k = 1; k <= tc; k++) {
        cin >> m >> n;
        
        int si, sj;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> mat[i][j];
                if(mat[i][j] == '@') {
                    si = i;
                    sj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        
        cellNo = 0;
        dfs(si, sj);
        cout << "Case " << k << ": " << cellNo << endl;
    }
    
    return 0;
}
