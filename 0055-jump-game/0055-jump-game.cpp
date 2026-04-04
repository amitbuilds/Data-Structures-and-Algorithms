class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;
        for(int i = nums.size() - 2; i>=0 ; i--){
            if(i + nums[i] >= goal){
                goal = i ;
            }
        }
        return goal==0;
        // if(nums[0]<nums[1]) {
        //     return true;
        // }
        // return false;
        // int n = nums.size();
        // for(int i =0 ;  i < n ;i++){
        //     int temp = nums[i];
        //     temp
        // }
        // while(i!=n){
        //     int temp = nums[i];
        //     if(temp>0){

        //     }
        // }
    }
};