class Solution {
public:
    bool palcheck(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            return false;
            else
            {
                i++;j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;j--;
            }
            else
            {
                bool one=palcheck(s,i+1,j);
                bool two=palcheck(s,i,j-1);
                bool ans= one|| two;
                return ans;
            }
        }
        return true;  
    }
};