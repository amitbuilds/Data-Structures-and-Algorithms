class Solution {
public:
    int minFlips(string s) {

         // Characteristic function
        auto I = [](char ch, int x) -> int { return ch - '0' == x; };

        int n = s.size();
        vector<vector<int>> pre(n, vector<int>(2));
       
        for (int i = 0; i < n; ++i) {
            pre[i][0] = (i == 0 ? 0 : pre[i - 1][1]) + I(s[i], 1);
            pre[i][1] = (i == 0 ? 0 : pre[i - 1][0]) + I(s[i], 0);
        }

        int ans = min(pre[n - 1][0], pre[n - 1][1]);
        if (n % 2 == 1) {
           
            vector<vector<int>> suf(n, vector<int>(2));
           
            for (int i = n - 1; i >= 0; --i) {
                suf[i][0] = (i == n - 1 ? 0 : suf[i + 1][1]) + I(s[i], 1);
                suf[i][1] = (i == n - 1 ? 0 : suf[i + 1][0]) + I(s[i], 0);
            }
            for (int i = 0; i + 1 < n; ++i) {
                ans = min(ans, pre[i][0] + suf[i + 1][0]);
                ans = min(ans, pre[i][1] + suf[i + 1][1]);
            }
        }

        return ans;













        // int n = s.length();
        // string s1 = "";
        // string s2 = "";
        // for(int i = 0 ; i < n ; i++){
        //     if(i%2==0){
        //         s1[i] = '1';
        //         s2[i] = '0';
        //     }else{
        //         s1[i] = '0';
        //         s2[i] = '1';
        //     }
        // }
        // int count1 = 0;

        // int count2 = 0;
        // for(int i = 0 ; i < n ; i++){
        //     if(s1[i]!=s[i]){
        //         count1++;
        //     }
        //     if(s2[i]!=s[i]){
        //         count2++;
        //     }
        // }
        // int mini = min(count1,count2);

        // return mini;

    }
};