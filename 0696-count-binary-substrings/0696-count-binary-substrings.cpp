class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0 ;
        int n = s.length();
        for(int i =0 ;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
        }
        return (count+2);
    }
};