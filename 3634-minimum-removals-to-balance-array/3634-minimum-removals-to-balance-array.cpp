class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        // sort(nums.begin(),nums.end(),greater<int>());//sort(v.begin(), v.end(), greater<int>());
        // int min = nums[n-1];
        // int i = 0 ;
        // int delCount = 0;
        // while(i<n){
        //     if(nums[i]<=min*k){
        //         break;
        //     }else{
        //         delCount++;
        //         i++;
                
        //     }
        // }
        // return (n-delCount);
         sort(nums.begin(), nums.end()); 
        
        int ans = n;
        
        int j = 0;
        for (int i = 0; i < n; i++) {
            while (j < n && nums[j] <= (long long)nums[i] * k) {
                j++;
            }
            int keep = j - i;
            ans = min(ans, n - keep);
        }
        
        return ans;
    }
};