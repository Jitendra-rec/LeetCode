class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int> &nums,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        

        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            solve(ans,nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=0;
        solve(ans,nums,n);
        return ans;
    }
};