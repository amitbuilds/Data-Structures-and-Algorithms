class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;

    //     int n = digits.size();

    //     for(int i = n-1;i>0;i--){
    //         if(digits[i]<9){
    //             digits[i]++;
    //             return digits;
    //         }
    //         digits[i] = 0;
    //     }
    //    digits.insert(digits.begin(), 1);
    //     return digits;
        // for(int i = 0 ; i<n ;i++){
        //     if(i == (n-1)){
        //         digits[i] = (digits[i] + 1);
        //     }
        // }
        // return digits;



        // int num = 0;
        // for(int i = 0; i<n;i++){
        //     num = num*10 + digits[i];
        // }
        // num++;
        // vector<int> ans;
        // while(num>0){
        //     int ld = num%10;
        //     ans.push_back(ld);
        //     num = num/10;
        // }
        // reverse(ans.begin(),ans.end());
        // // int idx = n - 1;
        // // int digits[idx] = digits[idx] + 1;
        // return ans;
    }
};