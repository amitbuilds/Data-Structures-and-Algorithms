class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
  long long total = 0;
        for (int x : nums) total += x;

        int rem = total % p;
        if (rem == 0) return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        long long prefix = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            prefix = (prefix + nums[i]) % p;

            int target = (prefix - rem + p) % p;

            if (mp.count(target)) {
                ans = min(ans, i - mp[target]);
            }

            mp[prefix] = i;
        }

        return ans == nums.size() ? -1 : ans;
    //     sort(nums.begin(), nums.end(), greater<int>());
    //     int sum = 0 ;
    //     for(int i = 0 ; i < nums.size();i++){
    //         sum = sum + nums[i];
    //     }
    //     int ans = 0;
    //     int rem = sum % p;
    //     int j = 0 ;
    //     while(rem<=0){
    //         if(rem>nums[j]){
    //             ans++;
    //             rem = rem-nums[j];
    //             j++;
    //         }
    //     }
    //     // int max = 0;
    //     // for(int i = 0 ; i < nums.size();i++){
    //     //     if(nums[i]>sum){

    //     //     }
    //     // }
    // return ans;
    }
};