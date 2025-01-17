class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int x=0;
        for(auto i:d) x^=i;
        return !x;
    }
};