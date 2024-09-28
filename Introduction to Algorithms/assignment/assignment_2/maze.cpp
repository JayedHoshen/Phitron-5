#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

char mat[N][N];
bool vis[N][N];
int n, m, si, sj, di, dj;

vector <pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

map<pair<int, int>, pair<int, int>> mp;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m || mat[i][j] == '#') return false;
    return true;
}

void bfs(int si, int sj) {
    vis[si][sj] = true;

    queue <pair<int, int>> q;
    q.push({si, sj});

    while(!q.empty()) {
        pair <int, int> node = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int ci = node.first + d[i].first;
            int cj = node.second + d[i].second;

            if(valid(ci, cj) && !vis[ci][cj]) {
                vis[ci][cj] = true;
                q.push({ci, cj});
                mp[{ci, cj}] = {node.first, node.second};
            } 
        }
    }   
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)  {
            cin >> mat[i][j];
            if(mat[i][j] == 'R') {
                si = i;
                sj = j;
            }
            if(mat[i][j] == 'D') {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));

    bfs(si, sj);    

    if(vis[di][dj]) {
        int xi = di;
        int xj = dj;

        while(true) {
            int newxi = mp[{xi, xj}].first;
            int newxj = mp[{xi, xj}].second;
            
            xi = newxi;
            xj = newxj;

            if(mat[xi][xj] == 'R') break;
            
            mat[xi][xj] = 'X';
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cout << mat[i][j];
        cout << endl;
    }

    return 0;
}