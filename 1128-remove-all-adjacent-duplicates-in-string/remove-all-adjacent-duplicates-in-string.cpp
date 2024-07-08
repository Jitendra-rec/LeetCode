class Solution {
public:
    string removeDuplicates(string s) {
        string temp="";

        for(auto i:s)
        {
            if(temp.empty())
            temp.push_back(i);
            else if(temp.back()==i)
            temp.pop_back();
            else
            temp.push_back(i);
        }
        return temp;
    }
};