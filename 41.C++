class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    bfs(grid,i,j,visited);
                    count++;
                }
            }
        }
        return count;
    }
private:
    void bfs(vector<vector<char>>& grid,int x,int y,vector<vector<int>>& visited) {
        int n = grid.size(), m = grid[0].size();
        if (x < 0 || x == n || y < 0 || y == m || visited[x][y] || grid[x][y] == '0') return;
        visited[x][y] = 1;
        bfs(grid,x,y-1,visited);
        bfs(grid,x-1,y,visited);
        bfs(grid,x+1,y,visited);
        bfs(grid,x,y+1,visited);
        bfs(grid,x+1,y+1,visited);
        bfs(grid,x-1,y-1,visited);
        bfs(grid,x-1,y+1,visited);
        bfs(grid,x+1,y-1,visited);
    }
};