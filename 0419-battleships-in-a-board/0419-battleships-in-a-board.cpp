class Solution {
public:
    void dfs(vector<vector<int>>& vis, int i, int j, vector<vector<char>>& board){
        vis[i][j] = 1;

        if(i+1 >= 0 && i+1 < vis.size() && j >= 0 && j < board[0].size() && board[i+1][j] == 'X')
            dfs(vis, i+1, j, board);

        if(i >= 0 && i < vis.size() && j+1 >= 0 && j+1 < board[0].size() && board[i][j+1] == 'X')
            dfs(vis, i, j+1, board);
    }

    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(vis[i][j] == 0 && board[i][j] == 'X'){
                    count++;
                    dfs(vis, i, j, board);
                }
            }
        }
        return count;
    }
};