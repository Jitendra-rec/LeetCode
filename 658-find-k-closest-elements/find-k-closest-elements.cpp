class Solution {
public:
    int solve(vector<int>&arr,int x)
    {
        int s=0,e=arr.size()-1,mid,index=e;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(arr[mid]>=x)
            {
                index=mid;
                e=mid-1;
                
            }
            else
            s=mid+1;
        }
        return index;
    }
    vector<int>m2(vector<int>& arr, int k, int x) {
        int right=solve(arr,x);
        cout<<right<<endl;
        int left=right-1;
        while(k--)
        {
            if(left<0)
            right++;
            else if(right>arr.size()-1)
            left--;
            else if(abs(arr[left]-x)<=abs(arr[right]-x))
            left--;
            else
            right++;
        }
        vector<int>ans;
        for(int i=left+1;i<right;i++)
        ans.push_back(arr[i]);
        return ans;
    }
    vector<int> m1(vector<int>& arr, int k, int x)
    {
        int l=0,r=arr.size()-1;

        while((r-l+1)!=k)
        {
           // cout<<abs(arr[l]-x) <<" "<<abs(arr[r]-x)<<endl;
            if(abs(arr[l]-x) <= abs(arr[r]-x))
            r--;
            else
            l++;
        }
      //  cout<<l<<" "<<r;
        vector<int>ans;
        for(int i=l;i<=r;i++)
        ans.push_back(arr[i]);
        return ans;

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        return m1(arr,k,x);
       
     
    }
};