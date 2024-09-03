class Solution {
public:
    int getLucky(string s, int k) {
        string t="0";
        for(auto i:s)
        {
            t=t+to_string(int(i-'a'+1));
        }
        
        int sum;
        while(k!=0)
        {
            k--;
            sum=0;
            for(auto i:t)
            sum+=int(i-'0');
            t=to_string(sum);
        }

        
        return sum;
    }
};