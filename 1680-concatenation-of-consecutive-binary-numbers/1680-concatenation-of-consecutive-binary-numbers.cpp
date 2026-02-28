class Solution {
public:
    int concatenatedBinary(int n) {
        const int mod = 1e9 + 7;
        long long result = 0;
        int bitLength = 0;

        for (int i = 1; i <= n; i++) {
            
            // If i is power of 2, increase bit length
            if ((i & (i - 1)) == 0) {
                bitLength++;
            }

            // Shift left and add i
            result = ((result << bitLength) % mod + i) % mod;
        }

        return result;
    }
};