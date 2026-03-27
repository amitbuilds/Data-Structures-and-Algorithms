class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        k = k % m;
        vector<vector<int>> res(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            if(i%2==0){
                for(int j = 0; j < m; j++){
                    res[i][j] = mat[i][(j + k) % m];
                }
            }else{
                for(int j = 0; j < m; j++){
                    res[i][j] = mat[i][(j - k + m) % m];
                }
            }
        }
        bool found = true;
        for(int i = 0 ; i < n ;i++){
           
                for(int j = 0 ; j < m ; j++){
                    if(res[i][j]!=mat[i][j]){
                        found = false;
                        break;
                    }
                }
            
        }
        return found;
    }
};