class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>s1;
        for(int i=0; i<s.length();i++)
        {
            if(s[i]=='(')
            s1.push(i);
            else if(s[i]==')')
            {
                if(s1.empty())
                s[i]='0';
                else
                s1.pop();
            }
        }
   
        while(!s1.empty())
        {
            s[s1.top()]='0';
            s1.pop();
        }
        string t="";
        for(char i:s)
        {
            if(i!='0')
            t += i;
        }
    return t;
        
    }
};