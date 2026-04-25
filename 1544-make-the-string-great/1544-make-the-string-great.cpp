class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0  ;i < s.length(); i++){
            char temp = s[i];
            if(st.empty()){
                st.push(temp);
            }else if(abs(temp - st.top()) == 32){
                st.pop();
            }else{
                st.push(temp);
            }
        }
        string ans = "";
        while(!st.empty()){
            char ch = st.top();
            ans.push_back(ch);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};