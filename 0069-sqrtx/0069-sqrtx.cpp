class Solution {
public:
    int mySqrt(int x) {
        int l = 1;
        int h = x/2;
        int mid, ans;
        if(x<2){
            return x;
        }
        while(l<=h){
            mid = (l+h)/2;
            if(mid<=x/mid){
                ans = mid;
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
    return ans;
    }
};