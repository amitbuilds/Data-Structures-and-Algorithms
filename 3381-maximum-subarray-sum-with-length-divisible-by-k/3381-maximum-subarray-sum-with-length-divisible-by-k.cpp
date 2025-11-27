class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end(), greater<int>());
        // int n = nums.size();
        // int sum = 0 ;
        // int reminder = n % k;
        // int omg = n - reminder;
        // for(int i = 0 ; i < omg ; i++){
        //     sum = sum + nums[i];
        // }
        // return sum;
                int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++){
            prefix[i + 1] = prefix[i] + nums[i];
        }
        vector<long long> minPrefix(k, LLONG_MAX);

        long long ans = LLONG_MIN;

        for(int i = 0; i <= n; i++) {
            int r = i % k;
            if(minPrefix[r] != LLONG_MAX) {
                ans = max(ans, prefix[i] - minPrefix[r]);
            }

            minPrefix[r] = min(minPrefix[r], prefix[i]);
        }

        return ans;

    }
};