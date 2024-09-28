#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
const int M = 1e3+5;

char mat[N][M];
bool vis[N][M];
int n, m, cnt;

vector <pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m || mat[i][j] == '-') return false;
    return true;
}

void dfs(int si, int sj) {
    vis[si][sj] = true;
    cnt++;

    for(int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci, cj) == true && vis[ci][cj] == false) dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)  cin >> mat[i][j];
    }
    memset(vis, false, sizeof(vis));

    vector <int> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           if(mat[i][j] == '.' && vis[i][j] == false) {
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
           }
        }
    }

    sort(v.begin(), v.end());

    if(v.size() > 0) cout << v[0] << endl;
    else cout << "-1" << endl;

    return 0;
}