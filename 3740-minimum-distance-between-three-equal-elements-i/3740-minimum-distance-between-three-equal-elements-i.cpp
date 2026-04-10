class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        // int n = nums.size();
        // nums.sort():
        // map<int,int> pair;
        // for(int ch : nums){
        //     pair[ch++];
        // }
        // int maxi = 0;
        // for(int i = 0 ; i < n ; i++){
        //     maxi = max(maxi,pair.second);
        // }
        // int a = 0,b=0,c=0;
        // for(int i = 0 ; i < n ; i++){
        //     if(maxi==nums[i]){
        //         a = i;
        //     }
        // }
        unordered_map<int, vector<int>> mp;
        
        // Step 1: store indices
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        // Step 2: check each value
        for(auto &it : mp){
            vector<int> &v = it.second;

            // need at least 3 occurrences
            if(v.size() < 3) continue;

            // Step 3: check consecutive triplets
            for(int i = 0; i + 2 < v.size(); i++){
                int dist = 2 * (v[i+2] - v[i]);
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};