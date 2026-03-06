class Solution {
public:
    bool checkOnesSegment(string s) {
        // int n = s.length();
      
        // bool found = false;
        // for(int i = 1 ; i < n ; i++){

        //     if(s[i]=='1' && s[i+1]=='0'){
        //         found = true;
        //         break;
        //     }
        // }
        // return found;



        for(int i = 1; i < s.length(); i++){
            if(s[i] == '1' && s[i-1] == '0'){
                return false;
            }
        }
        return true;
    }
};