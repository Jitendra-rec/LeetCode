class Solution {
public:
    int solve(vector<int>&num,int i,vector<int>&dp)
    {
        if(i>=num.size())
        return 0;

        if(dp[i]!=-1)
        return dp[i];
        dp[i]=max(num[i]+solve(num,i+2,dp),solve(num,i+1,dp));
        return dp[i];

    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        int i=0;
        return solve(nums,i,dp);
    }
};