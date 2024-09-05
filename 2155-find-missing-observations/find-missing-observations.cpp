class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0,m=rolls.size();
        sum=(m+n)*mean;

        for(auto i:rolls)
        sum-=i;

        if(sum>n*6 || sum<0)
        return {};
        vector<int>ans;
        int temp=sum/n;
        int rec=sum%n;
        for(int i=0;i<n;i++)
        {
            if(sum==0) return {};
            if(rec>0)
            {
                ans.push_back(temp+1);
                rec--;
                sum=sum-temp-1;
                
            }
            else
            {
                ans.push_back(temp);
                sum-=temp;
            }
            
        }
         
        return ans;

    }
};