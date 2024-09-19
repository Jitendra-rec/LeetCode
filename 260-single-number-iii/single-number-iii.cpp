class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(auto i:nums)
        x^=i;
        int check=0;
        while(!(x>>check++ & 1));
         check--;
         int n1=0,n2=0;
         for(auto i:nums)
         {
            if(i>>check & 1)
            n1^=i;
            else
            n2^=i;
         }

         return {n1,n2};
        
    }
};