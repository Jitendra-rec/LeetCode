class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long ,vector<long  long>,greater<long long>>temp;
        int  j=0;
        long long a,b;
        long long c;
        for(auto i: nums)
            temp.push(i);
        
       while(temp.top()<k)
       {
           j++;
            a=temp.top();
           temp.pop();
            b=temp.top();
           temp.pop();
            c=a*2+b;
           temp.push(c);
           
       }
        return j;
        
    }
};