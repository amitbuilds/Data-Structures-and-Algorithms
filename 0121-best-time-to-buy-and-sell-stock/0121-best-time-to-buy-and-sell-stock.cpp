class Solution {
public:
    int maxProfit(vector<int>& prices) { 
       int mini = INT_MAX;
       int maxi = 0;
       for(int price : prices){
            if(price < mini){
                mini = price;
            }else{
                maxi = max(maxi,price - mini);
            }
       }
       return maxi;
    }
};