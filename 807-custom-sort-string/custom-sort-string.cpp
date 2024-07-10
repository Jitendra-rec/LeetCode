string global_order;
class Solution {
public:
    static bool cmt(char a,char b)
    {
        return global_order.find(a)<global_order.find(b);
    }
    string customSortString(string order, string s) {
        global_order = order;
        sort(s.begin() , s.end() , cmt);
        return s;
        
    }
};