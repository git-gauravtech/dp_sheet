// https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    vector<int> dp = vector<int>(46, -1);
    int climbStairs(int n) {
        if(n <= 2) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
