#include <map>

class MyCalendar {
public:
    std::map<int, int> bookings; // Store start as key and end as value

    bool book(int start, int end) {
        auto next = bookings.lower_bound(start); // First booking with start time >= current start

        // Check if there is any overlap with the previous or next event
        if (next != bookings.end() && next->first < end) {
            return false; // Overlap with the next event
        }

        if (next != bookings.begin() && (--next)->second > start) {
            return false; // Overlap with the previous event
        }

        // No overlap, safe to book the event
        bookings[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */