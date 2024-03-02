class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        vector<int> temp(right+1,0);
        int i=right;

        while(left<=right )
        {   
            if(abs(nums[left])>abs(nums[right]) )
            { //cout<<nums[left]<<endl;
                temp[i--]=nums[left]*nums[left];
                left++;
            }
            else
            { //cout<<nums[right]<<endl;
                temp[i--]=nums[right]*nums[right];
                right--;
            }

        }
        return temp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        
    }
};