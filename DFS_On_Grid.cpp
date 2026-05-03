int n, m;
vector<vector<int>> grid;
vector<vector<bool>> vis;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
    vis[x][y] = true;

    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m &&
            !vis[nx][ny] && grid[nx][ny] == 1) {

            dfs(nx, ny);
        }
    }
}
