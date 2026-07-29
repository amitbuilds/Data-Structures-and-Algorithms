class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = true;
        int count = 0;
        for(int i = s.length() - 1;i>=0;i--){
            if(s[i]==' ' && flag){
                continue;
            }
            else{
                if(s[i]==' '){
                    return count;
                }
                flag = false;
                count++;
            }
        }
        return count;
        
    }
};