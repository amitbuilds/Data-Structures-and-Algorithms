class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans;

        for(int i = 0 ; i < n ; i++){
            ans.push_back(arr[i]);
        }

        unordered_map<int, int> mp;
    
        for(int i = 0 ; i < n ; i++){
            int count = 0;
            int temp = ans[i];
            while(temp != 0){
                int n = temp & 1;
                if(n == 1){
                    count++;
                }
                temp = temp >> 1;
            }
            mp[ans[i]] = count;
        }
sort(ans.begin(), ans.end(), [&](int a, int b) {
    if(mp[a] == mp[b])
        return a < b;    
    return mp[a] < mp[b];
});
        return ans;
    }
};