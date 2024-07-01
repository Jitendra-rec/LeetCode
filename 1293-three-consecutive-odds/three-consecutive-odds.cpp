class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int t=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]&1)
            {
                t++;
                if(t==3)
                return true;
            }
            else
            {
                t=0;
            }
        }
        return false;
        
    }
};