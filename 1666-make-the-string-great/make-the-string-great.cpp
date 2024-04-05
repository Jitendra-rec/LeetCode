class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string t="";
        
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                char c=st.top();
                if(c-32==s[i] || c+32==s[i])
                st.pop();
                else
                st.push(s[i]);

            }
        }
        while(!st.empty())
        {
            t=st.top()+t;
            st.pop();
        }
        return t;

    }
};