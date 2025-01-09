class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(auto i: words)
        {
            if(!s.find(i)) count++;
        }
        return count;
    }
};