class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,emptyBottle=0;
        while(numBottles>=numExchange)
        {   cout<<ans<<" "<<numBottles<<endl;
            ans+=numBottles/numExchange;
            numBottles=numBottles/numExchange+numBottles%numExchange;
        }
        return ans;
    }
};