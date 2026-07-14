// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         int num = 0 ;
//         for(int i = 0; i< n ;i++){
//             int temp = digits[i];
//             num = num*10 + temp;
//         }
//         num++;
//         vector<int> ans;
//         while(num){
//             int temp = num/10;
//             num==num%10;
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// };



















class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n-1;i>=0;i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
            if(i==0){
                digits.insert(digits.begin(),1);
                return digits;
            }
        }
        return digits;
    }
};
