class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i = 0;i<n;i++){
            if(mini>nums[i]){
                mini = min(mini,nums[i]);
            }
        }
        vector<int> diff;
        for(int i = 0;i<n;i++){
            int difff = nums[i] - mini;
            diff.push_back(difff);
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans += diff[i];
        }
        return ans;
    }
};