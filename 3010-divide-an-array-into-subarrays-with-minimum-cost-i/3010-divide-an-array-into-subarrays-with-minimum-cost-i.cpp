class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini1 = INT_MAX ; 
        int mini2 = INT_MAX;

        for(int i = 1 ; i < nums.size();i++){
            if(nums[i] < mini1) {
                mini2 = mini1;
                mini1 = nums[i];   
            }
            else if(nums[i] < mini2) {
                mini2 = nums[i];  
    }
        }
        return (nums[0] + mini1 + mini2);
        // vector<int> arr;
        // for(int i = 1;i<nums.size();i++){
        //     arr.push_back(nums[i]);
        // }
        // sort(arr.begin(),arr.end());
        // int sum = nums[0] ;
        // for(int i =0 ; i<3;i++){
        //     int found = arr.back();
        //     arr.pop_back();
        //     sum += found;
        // }
        // return sum;
    }
};