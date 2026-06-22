class Solution {
public:
     // Function to compute the minimum number of jumps to reach the last index
    int jump(vector<int>& nums) {
        // Get the size of input array
        int n = nums.size();

        // Initialize DP array with large value
        vector<int> dp(n, INT_MAX);

        // It takes 0 jumps to reach the starting index
        dp[0] = 0;

        // Iterate through all indices
        for (int i = 0; i < n; ++i) {
            // For each position, calculate max jump
            for (int j = 1; j <= nums[i] && i + j < n; ++j) {
                // Update dp value for the position we can reach
                dp[i + j] = min(dp[i + j], dp[i] + 1);
            }
        }

        // Return the minimum jumps to reach last index
        return dp[n - 1];
    }
};