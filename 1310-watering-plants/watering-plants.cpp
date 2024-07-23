class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water=capacity,ans=0;

        for(int i=0;i<plants.size();i++)
        {
            if(water >= plants[i])
            {
                
                ans=ans+1;
                water=water-plants[i];
            }
            else
            {
                water=capacity;
                ans=ans+2*i;
                i=i-1;
            }
        }
        return ans;

    }
};