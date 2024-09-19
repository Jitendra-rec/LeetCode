class Solution {
public:
    void add(string s,string t,int i,int j,int carry,string &ans)
    {
        if(i<0 && j<0 && carry==0)
        return ;
        int c=0;
        c+=i>=0?s[i]:'0';
        c+=j>=0?t[j]:'0';
        c=c-2*'0';
        c+=carry;
        carry=c/10;
        c=c%10;
        ans=ans+char(c+48);
         add(s,t,i-1,j-1,carry,ans);

    }
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        add(num1,num2,i,j,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;


    }
};