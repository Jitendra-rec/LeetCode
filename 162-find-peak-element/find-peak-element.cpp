class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        int s=0,e=arr.size()-1,mid;
       
        while(s<e)
        {
            mid=s+(e-s)/2;
           // cout<<"s= "<<s<<"  end= "<<e<<" mid= "<<mid<<endl;
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
                
            }
            
            
        }
        return s;
    }
        
    
};