class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1,mid;
    if(nums[s]<nums[e])
    return nums[s];
    int t=0;
    
    
    while(s<e){
        mid=(e+s)/2;
        cout<<s<<" "<<mid<<" "<<e<<endl;
        if(nums[mid]==nums[t])
        t++;
        else if(nums[mid]<nums[t])
        e=mid;
        else
        s=mid+1;
        
    }
    cout<<s<<" "<<mid<<" "<<e<<endl;
    return nums[s];

        
    }
};