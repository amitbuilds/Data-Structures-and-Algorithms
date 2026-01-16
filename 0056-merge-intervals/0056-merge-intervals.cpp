class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        // Step 2: Iterate through intervals
        for (auto& interval : intervals) {
            // If merged is empty OR no overlap, push new interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } 
            // Else, there is overlap → merge
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};
