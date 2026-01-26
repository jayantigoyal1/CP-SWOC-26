class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        // Check each bit position (0 to 31)
        for (int bit = 0; bit < 32; bit++) {
            int ones = 0;

            // Count numbers with current bit set
            for (int num : nums) {
                if (num & (1 << bit))
                    ones++;
            }

            int zeros = n - ones;

            // Each (1,0) pair contributes 1 to Hamming distance
            ans += (long long)ones * zeros;
        }

        return ans;
    }
};
