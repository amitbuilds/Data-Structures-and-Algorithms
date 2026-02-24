class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int n = mat.length;
        int m = mat[0].length;
        if(m*n != r*c){
            return mat;
        }
        // int[] arr;
        int[] arr = new int[m*n];
        int fuck = 0 ;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                int temp = mat[i][j];
                arr[fuck] = temp;
                fuck++;
            }
        }
        // int[][] ans;
        int index = 0;
        int[][] ans = new int[r][c];
      
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                ans[i][j] = arr[index++];
            }
    
        }
    return ans;
    }

}