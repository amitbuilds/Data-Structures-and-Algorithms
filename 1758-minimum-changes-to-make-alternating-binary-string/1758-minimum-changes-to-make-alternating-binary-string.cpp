class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        // string temp = "";
        string temp(n, ' ');
      
        for(int i = 0 ; i < n ; i ++){
            if(i%2==0){
                temp[i] = '0';
            }
            else{
                temp[i] = '1';
            }
        }
        int count = 0 ;
        for(int i =0 ; i < n ; i++){
            if(temp[i]!=s[i]){
                count++;
            }
        }

        // string temp2 = "";
        string temp2(n, ' ');
        for(int i = 0 ; i < n ; i ++){
            if(i%2!=0){
                temp2[i] = '0';
            }
            else{
                temp2[i] = '1';
            }
        }
        int count2 = 0 ;
        for(int i =0 ; i < n ; i++){
            if(temp2[i]!=s[i]){
                count2++;
            }
        }


       int  mini = min(count,count2);
    return mini; 
        
        // int n = s.length();
        // int zero = 0;
        // int one = 0;
        // for(int i = 0 ; i < n ; i++){
        //     if(s[i] == '0'){
        //         zero++;
        //     }else{
        //         one++;
        //     }
        // }
        // while(zero!=0 && one!=0){
        //     zero--;
        //     one--;
        // }
        // int ans = (zero+one)/2;
      
        // return ans;
    }
};