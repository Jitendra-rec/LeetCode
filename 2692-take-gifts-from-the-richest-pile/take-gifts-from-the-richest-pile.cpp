class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        priority_queue<int>pq;

        for(auto i:gifts)
        pq.push(i);
        for(int i=0;i<k;i++)
        {
            int k=pq.top();
            pq.pop();
            k=sqrt(k);
            pq.push(k);

        }
        long long ans=0;
        while(!(pq.empty()))
        {
            ans+=pq.top();
            pq.pop();

        }
        return ans;
        
    }
};