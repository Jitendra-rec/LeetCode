class Solution {
public:
    int minOperations(vector<string>& logs) {
        string s="";
        
        for(auto i: logs)
        { 
            if( !s.empty() && i=="../")
                    s.pop_back();
            else if(i!="./" && i!="../")
                    s.push_back('M');
        }
        
        return s.length();
    }
};