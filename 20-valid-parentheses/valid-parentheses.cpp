class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(st.empty())  st.push(i);
            else if(st.top()=='[' && i==']') st.pop();
             else if(st.top()=='(' && i==')') st.pop();
              else if(st.top()=='{' && i=='}') st.pop();
              else
              st.push(i);
        }

        if(st.empty()) return true;
        return  false;

    }
};