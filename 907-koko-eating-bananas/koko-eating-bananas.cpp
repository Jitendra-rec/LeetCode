class Solution {
public:
    bool check(vector<int>& piles,int k,int h)
    {       int t=0;
        for(int i=0;i<piles.size();i++)
        {
            if(t>h)
            return false;
            t+=piles[i]/k;
            if(piles[i]%k>0) t++;
        }
        if(t<=h)
        return true;
        return false;
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int e=*max_element(piles.begin(),piles.end());
        int s=1,m,ans=4;
    
        while(s<=e)
        {    m=s+(e-s)/2;
            if(check(piles,m,h))
            {
                ans=m;
                e=m-1;
                
            }
            else
            s=m+1;
            
        }
        return ans;

        

    }
};