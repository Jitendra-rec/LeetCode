class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>arr;
        for(int i=0;i<nums.size();i++)
         arr.push(nums[i]);

         for(int i=0;i<k-1;i++)
         arr.pop();
         return arr.top();
        // priority_queue<int,vector<int>,greater<int>>arr;

        // for(int i=0;i<k;i++)
        //  arr.push(nums[i]);

        // for(int i=k;i<nums.size();i++)
        // {
        //     arr.push(nums[i]);
        //    // cout<<arr.top()<<endl;
        //     arr.pop();
        // }
        // int ans=arr.top();
       // return ans;
    }
};