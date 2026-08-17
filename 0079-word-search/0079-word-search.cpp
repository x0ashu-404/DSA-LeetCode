class Solution {
public:
    vector<vector<bool>> visited;

    bool fun(vector<vector<char>> &board, string &word, int i, int j, int idx){
        // check for invalid position
        if(i<0 or i>=board.size() or j<0 or j>= board[0].size()){
            return false;
        }

        // check is already visited
        if(visited[i][j]){
            return false;
        }
        
        // check for character doesn't match
        if(board[i][j] != word[idx]){
            return false;
        }

        // word found
        if(idx == word.size()-1){
            return true;
        }

        // choose
        visited[i][j] = true;

        // explore
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];

            if(fun(board, word, ni, nj, idx+1)){
                return true;
            }
        }

        // undo
        visited[i][j] = false;

        return false;


    }
    bool exist(vector<vector<char>>& board, string word) {
        visited = vector<vector<bool>>(board.size(), vector<bool>(board[0].size(), false));

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] == word[0]){
                    if(fun(board, word, i, j, 0)){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};