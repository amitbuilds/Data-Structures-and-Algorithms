class Solution {
public:
    string makeLargestSpecial(string s) {
        int count  = 0 ;
        int start = 0;
        vector<string> result;

        for(int i = 0;i < s.length() ; i++){
            if(s[i] == '1') count++;
            else count--;

            if(count == 0){
                string inner = s.substr(start + 1 , i-start-1);
                result.push_back("1" + makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }

        sort(result.rbegin(),result.rend());
        string ans = "";
        for(auto &str : result){
            ans += str;
        }
        return ans;
    }
};