class Solution {
public:
int reverse(int n) {
        int reverse = 0;
        while(n!=0){
            int t = n%10;
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10){
                return 0;
            }
            reverse = reverse*10 + t;
            n = n/10;
        }
        return reverse;
    }
    bool isPalindrome(int n) {
        if(n<0) return false;
        int rev = reverse(n);
        if(rev==n) return true;
        return false;
    }
};