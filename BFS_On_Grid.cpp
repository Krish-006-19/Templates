int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs_grid(vector<vector<int>>& grid, int sx, int sy) {
    int n = grid.size(), m = grid[0].size();
    queue<pair<int,int>> q;
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    q.push({sx, sy});
    vis[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front(); 
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m &&
                !vis[nx][ny] && grid[nx][ny] == 1) {

                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}
