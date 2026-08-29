class Solution {
public:
    void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>>& grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j] || grid[i][j] != '1'){
            return ;
        }

        vis[i][j] = true;
        dfs(i-1, j, vis, grid); // top
        dfs(i, j+1, vis, grid); // right
        dfs(i+1, j, vis, grid); // bottom
        dfs(i, j-1, vis, grid); // left
    }
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    dfs(i, j, vis, grid);
                    island++;
                }
            }
        }

        return island;
    }
};