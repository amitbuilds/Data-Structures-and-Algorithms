class Solution {
public:
    // int fun(vector<int> &nums){
    //     int n = nums.size();
    //     int positive = 0;
    //     int zero = 0;
    //     // long long product = 1;
    //     for(int i = 0 ; i< n ;i++){
    //         // product*=nums[i];
    //         if(nums[i]==0){
    //             zero = 1;
    //             break;
    //         }
    //         if(nums[i]>0){
    //             positive++;
    //         }
    //     }
    //     if(zero==1){
    //         return 0;
    //     }
    //     if(positive%2==0){
    //         return 1;
    //     }else{
    //         return -1;
    //     }
    // }
    int arraySign(vector<int>& nums) {
        int neg = 0;
        for(int num:nums){
            if(num==0){
                return 0;
            }if(num<0){
                neg++;
            }
        }
        if(neg%2==0){
            return 1;
        }else{
            return -1;
        }




    }
};