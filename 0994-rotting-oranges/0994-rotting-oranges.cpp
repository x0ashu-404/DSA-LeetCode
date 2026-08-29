class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int, int>, int>> q;
        int ans = 0;
        int fresh = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        
        // pushing all sources(rotten orange) in queue
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    fresh++;
                }
                if(grid[i][j] == 2){
                    q.push({{i,j}, 0});
                }
            }
        }

        while(!q.empty()){
            int i = q.front().first.first;
            int j = q.front().first.second;
            int time = q.front().second;
            q.pop();

            ans = max(ans, time);

            if(i-1 >=0 and !vis[i-1][j] and grid[i-1][j] == 1){ // top
                q.push({{i-1, j}, time+1});
                vis[i-1][j] = true;
                fresh--;
            }
            if(j-1 >=0 and !vis[i][j-1] and grid[i][j-1] == 1){ // left
                q.push({{i, j-1}, time+1});
                vis[i][j-1] = true;
                fresh--;
            }
            if(i+1 <n and !vis[i+1][j] and grid[i+1][j] == 1){ // bottom
                q.push({{i+1, j}, time+1});
                vis[i+1][j] = true;
                fresh--;
            }
            if(j+1 <m and !vis[i][j+1] and grid[i][j+1] == 1){
                q.push({{i, j+1}, time+1});
                vis[i][j+1] = true;
                fresh--;
            }
        }

        if(fresh != 0) {
            return -1;
        }

        return ans;

    }
};