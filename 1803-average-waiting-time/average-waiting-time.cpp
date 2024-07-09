class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long chef_time=1,wait=0,num_of_customer=0;
        for(auto i:customers)
        {  // chef_time=max(chef_time,i[0]);
        if(chef_time<i[0])
            chef_time=i[0];

            num_of_customer++;
            chef_time+=i[1];
            wait+=chef_time-i[0];
        }
        
        
        return (double)wait/num_of_customer;
    }
};