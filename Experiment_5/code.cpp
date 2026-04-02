class Solution {
public:
    int perfectSum(vector<int>& arr, int target) {
        vector<int> dp(target + 1, 0);
        dp[0] = 1;

        for (int num : arr) {
            for (int j = target; j >= 0; j--) {
                if (num <= j) {
                    dp[j] += dp[j - num];
                }
            }
        }

        return dp[target];
    }
};
