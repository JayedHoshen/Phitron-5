class Solution {
public:
    int n, m, ans;
    bool vis[55][55];
    vector <pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    
    bool valid(int ci, int cj) {
        if(ci >= 0 && ci < n && cj >= 0 && cj < m) return true;
        else return false;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        ans++;
        vis[si][sj] = true;
        for(int i = 0; i < 4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1) dfs(ci, cj, grid);
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        memset(vis, false, sizeof(vis));
        n = grid.size();
        m = grid[0].size();

        int mx = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    ans = 0;
                    dfs(i, j, grid);
                    mx = max(mx, ans);
                } 
            }
        }
        return mx;
    }
};