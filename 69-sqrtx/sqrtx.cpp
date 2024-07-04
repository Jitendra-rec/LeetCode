class Solution {
public:
    int mySqrt(int x) {

        long long int start=0,end=x,mid=x/2,ans=-1;

        while(start<=end)
        { long long int p=mid*mid;
            if(p>x)
            end=mid-1;
            else
            {
            start=mid+1;
            ans=mid;
            }
            mid=start+(end-start)/2;
        }

        return ans;
        
    }
};