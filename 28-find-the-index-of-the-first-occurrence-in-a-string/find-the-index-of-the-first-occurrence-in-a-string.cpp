class Solution {
public:
    int strStr(string h, string n) {
        int a=h.length(),b=n.size();
        for(int i=0;i<a-b+1;i++)
        {
            string s=h.substr(i,b);
            if(s==n)
            return i;
        }
        return -1;
        
    }
};