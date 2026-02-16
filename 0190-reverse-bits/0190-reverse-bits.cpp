#include <bitset>
class Solution {
public:
    int reverseBits(int n) {

        unsigned int result = 0;

        for(int i = 0; i < 32; i++) {
            result <<= 1;           // shift result left
            result |= (n & 1);      // add last bit of n
            n >>= 1;                // shift n right
        }

        return result;


        // //int to bitwise
        // bitset<32> b(n);
        // //bitwise to string
        // string s = to_string(b);
        // int size = s.length();
        // //stirng to vector
        // vector<int> ans;
        // for(int i = 0; i<size ;i++){
        //     ans.push_back(n[i]);
        // }
        // //revese the bitwise
        // reverse(ans.begin(),ans.end());//reverse(v.begin(), v.end());
        // //vector to num
        // int num = 0;
        // for(int i = 0; i < ans.size(); i++) {
        //     num = num * 10 + ans[i];
        // }
        // //num bitwise to decimal int
        // int nu = 0;
        // int base = 1;
        // while(binary > 0) {
        //     int lastDigit = num % 10;
        //     nu += lastDigit * base;
        //     base *= 2;
        //     num /= 10;
        // }

        // //return decimal int
        // return nu;
    }
};