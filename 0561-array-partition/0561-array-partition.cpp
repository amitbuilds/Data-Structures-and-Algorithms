class Solution {
public:
    void SelectionSort(vector<int>& nums){
        int n = nums.size();
        for(int i = 0 ;i< n;i++){
            int minIndex = i;
            for(int j = i+1;j<n;j++){
                if(nums[j]<nums[minIndex]){
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
    }
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        // nums.sort();

        SelectionSort(nums);

        stack<int> s;
        for(int i =0 ; i< n; i++){
            s.push(nums[i]);
        }
        while(!s.empty()){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            int mini = min(a,b);
            sum+=mini;
        }
        return sum;
    }
};