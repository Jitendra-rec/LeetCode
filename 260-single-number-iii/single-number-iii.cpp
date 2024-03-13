class Solution {
public:
    vector<int> singleNumber(vector<int>& nums){
        int x=0;
        for(auto &i: nums)
        x=x^i;
        int p=0,n=x;

       for(int i = 0 ; i < 32 ; i++){
            if(x & (1 << i)){
                p = i;
                break;
            }
        }
       cout<<p<<" "<<x;
        int xor1=0,xor2=0;
        for(auto &i: nums)
        {
            if((i & (1<<p))!=0)
            xor1=xor1^i;
            else
            xor2=xor2^i;
        }
        if(xor1 < xor2) return {xor1,xor2};
        return {xor2,xor1};
    }    
       
};