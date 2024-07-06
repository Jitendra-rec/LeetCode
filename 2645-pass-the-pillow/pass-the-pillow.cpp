class Solution {
public:
    int passThePillow(int n, int time) {
        int flow=n-1;
        int remaining=time%flow;
        int turn =time/flow;

        if(turn&1)
        return n-remaining;
        return remaining+1;
    }
};