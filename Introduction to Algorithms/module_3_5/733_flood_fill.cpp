class Solution {
public:
    bool vis[51][51];
    int n, m;
    vector <pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool valid(int i, int j) {
        if(i < 0 || i >= n || j < 0 || j >= m) return false;
        return true;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int si, int sj, int color) {
        n = image.size();
        m = image[0].size();
        int sColor = image[si][sj];
        memset(vis, false, sizeof(vis));

        queue <pair<int, int>> q;
        q.push({si, sj});
        vis[si][sj] = true;
        image[si][sj] = color;

        while(!q.empty()) {
            pair<int, int> par = q.front();
            q.pop();

            int a = par.first, b = par.second;
            for(int i = 0; i < 4; i++) {
                int ci = a + d[i].first;
                int cj = b + d[i].second;

                if(valid(ci, cj) == true && vis[ci][cj] == false && sColor == image[ci][cj]) {
                    q.push({ci, cj});
                    image[ci][cj] = color;
                    vis[ci][cj] = true;
                }
            }
        }

        return image;
    }
};