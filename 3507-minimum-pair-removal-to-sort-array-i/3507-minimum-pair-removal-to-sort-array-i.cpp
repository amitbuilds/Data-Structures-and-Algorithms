class Solution {
public:
    // Check if array is non-decreasing
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while (!isSorted(nums)) {
            int minSum = INT_MAX;
            int index = 0;
            int n = nums.size();  // update size each loop

            // Find leftmost adjacent pair with minimum sum
            for (int i = 0; i < n - 1; i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    index = i;
                }
            }

            // Merge the pair
            nums[index] = nums[index] + nums[index + 1];
            nums.erase(nums.begin() + index + 1);

            operations++;
        }

        return operations;
    }
};
