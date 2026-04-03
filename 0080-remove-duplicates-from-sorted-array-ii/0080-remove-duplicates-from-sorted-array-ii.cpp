class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2; 
        if(nums.size()<=2) return nums.size();
        int index = 2;
        for(int i = 2 ; i  < nums.size() ; i++){
            if(nums[i] != nums[index-2]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
        // unordered_map<int,int> freq;
        // for(int ele : nums){
        //     freq[ele]++;
        // }
        // int count = 0 ;
        // int n = freq.size();
        // for(int i =0 ; i < n; i++){
        //     if(freq[i].second() > 2){
        //         count++;
        //     }
        // }
        // int d = n - count;
        // int ans = count*2 + d;

        // return ans;
        // int n = nums.size();
        // int count = 0;
        // vector<int> ans;
        // ans.push_back(nums[0]);
        // for(int i = 1 ;i < n;i++){
        //     if(count<=2 && nums[i]==nums[i-1]){
        //         ans.push_back(nums[i]);
        //         count++;
        //     }else{
        //         continue;
        //     }
        // }
        // return ans.size();
    }
};