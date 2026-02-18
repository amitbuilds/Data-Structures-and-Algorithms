class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> arr;
        while(n!=0){
            int bit = n & 1;
            arr.push_back(bit);
            n = n>>1;
        }
        int size = arr.size();
        bool yes = true;
        for(int i = 0 ; i < size - 1 ; i++){
            if(arr[i]==arr[i+1]){
                yes = false;
            }
        }
    return yes;
    }
};