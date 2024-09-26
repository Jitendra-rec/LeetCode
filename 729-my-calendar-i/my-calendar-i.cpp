#include <map>

class MyCalendar {
public:
    std::map<int, int> bookings; 

    bool book(int start, int end) {
        auto next = bookings.upper_bound(start); 

       
        if (next != bookings.end() && next->first < end) {
            return false;
        }

        if (next != bookings.begin() && (--next)->second > start) {
            return false;
        }

    
        bookings[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */