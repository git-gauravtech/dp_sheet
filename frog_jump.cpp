// https://www.geeksforgeeks.org/problems/geek-jump/1

class Solution {
public:
    vector<int> dp;

    int solve(vector<int>& height, int n) {
        if(n == 0) return 0;
        if(dp[n] != -1) return dp[n];
        int jump1 = solve(height, n-1) + abs(height[n] - height[n-1]);
        int jump2 = INT_MAX;
        if(n > 1) {
            jump2 = solve(height, n-2) + abs(height[n] - height[n-2]);
        }
        return dp[n] = min(jump1, jump2);
    }

    int minCost(vector<int>& height) {
        int n = height.size();
        dp.resize(n, -1);
        return solve(height, n-1);
    }
};