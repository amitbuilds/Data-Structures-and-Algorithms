class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> hashtable;
        for(int i = 0 ; i < n ; i++){
            hashtable.push_back({score[i], i});
        }
        sort(hashtable.rbegin(),hashtable.rend());
        vector<string> ans(n);
        for(int i = 0 ; i< n ; i++){
            if(i==0){
                ans[hashtable[i].second] = "Gold Medal";
            }
            else if(i==1){
                 ans[hashtable[i].second]= "Silver Medal";
            }
            else if(i==2){
                 ans[hashtable[i].second] = "Bronze Medal";
            }
            else{
                ans[hashtable[i].second] = to_string(i + 1);
                //ans[i] = hashtable[i].first;
            }
        }
        return ans;
    }
};