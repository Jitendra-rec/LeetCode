class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>q;
        for(int i=0;i<k;i++)
        {
            while( !q.empty() && nums[q.back()]<nums[i])
            {
                q.pop_back();
            }
              q.push_back(i);
           
        }
        ans.push_back(nums[q.front()]);

        for(int i=k;i<nums.size();i++)
        {
           
            
            while(!q.empty() && nums[q.back()]<nums[i])
            q.pop_back();

            while(!q.empty() && q.front()<=i-k )
                q.pop_front();

             q.push_back(i);
            ans.push_back(nums[q.front()]);

        }
        return ans;
    }
};