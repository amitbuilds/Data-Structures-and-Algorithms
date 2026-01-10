class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0 ;i < strs[0].size() ; i++){
            char ch = strs[0][i];
            bool present = true;
            for(int j = 1;j<strs.size();j++){
                if(i>=strs[j].size() || ch != strs[j][i]){
                    present = false;
                    break;
                }
            }
            if(present==false){
                break;
            }else{
                ans.push_back(ch);
            }
        }
    return ans;
    }
};