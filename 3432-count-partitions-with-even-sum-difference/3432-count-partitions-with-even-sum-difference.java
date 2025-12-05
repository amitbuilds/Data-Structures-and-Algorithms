class Solution {
    public int countPartitions(int[] nums) {
        long total = 0;
        for (int x : nums) total += x;

        // If total sum is odd → no valid partitions
        if ((total & 1) == 1) return 0;

        // Otherwise all indices 0..n-2 are valid
        return nums.length - 1;
    }
}
