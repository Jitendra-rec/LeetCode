class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int number_of_metal=0;
        int time_to_travel_metal=0;
        int last_index_metal=0;


        int number_of_plastic=0;
        int time_to_travel_plastic=0;
        int last_index_plastic=0;


        int number_of_glass=0;
        int time_to_travel_glass=0;
        int last_index_glass=0;

        for(int i=0;i<garbage.size();i++)
        {   string s=garbage[i];
            for( auto j:s)
            {  
              // cout<<j<<" ";
                if(j=='M')
                {
                    number_of_metal++;
                    last_index_metal=i;
                }
                if(j=='P')
                {
                    number_of_plastic++;
                    last_index_plastic=i;
                }
                if(j=='G')
                {
                    number_of_glass++;
                    last_index_glass=i;
                }
            }
        }

            for(int i=0;i<last_index_metal;i++)
            {
                time_to_travel_metal+=travel[i];
            }
            for(int i=0;i<last_index_plastic;i++)
            {
                time_to_travel_plastic+=travel[i];
            }
            for(int i=0;i<last_index_glass;i++)
            {
                 time_to_travel_glass+=travel[i];
            }

            int total_garbage=  number_of_metal 
                                + number_of_plastic 
                                + number_of_glass;

            int total_travel=   time_to_travel_metal
                                +time_to_travel_plastic
                                +time_to_travel_glass;

            int ans=total_garbage+total_travel;

            return ans;
            

            }
        
    
    
};