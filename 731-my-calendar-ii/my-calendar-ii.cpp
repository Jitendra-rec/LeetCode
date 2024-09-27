class MyCalendarTwo {
    using int2=pair<int, int>;
    vector<int2> S1;
    set<int2> S2;
public:
    MyCalendarTwo() {
        S1.reserve(1000);
    }
    
    bool book(int start, int end) {
        auto it=S2.lower_bound({start, -1});
        
        // overlap with the next interval
        if (it != S2.end() && (*it).first<end) 
            return 0;
        
        
        // overlap with the previous interval
        if (it != S2.begin() && (*prev(it)).second > start) 
            return 0;
        
        for (auto& [s, t]: S1){//There are expected several intervals
            int s0=max(s, start), t0=min(t, end);
            if  (s0 < t0)// overlap with S1
                S2.insert({s0, t0});//put into S2
        }
        S1.emplace_back(start, end);
        return 1;
    }
};
//cc
/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */