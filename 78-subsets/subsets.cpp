class Solution {
public:
void nsub(vector<int>v,vector<vector<int>>&ans,vector<int>t,int i){
 	if(i==v.size()){
 		ans.push_back(t);
 		//p(t);
 		return;
 	}
 	nsub(v,ans,t,i+1);
 	int temp=v[i];
 	t.push_back(temp);
 	nsub(v,ans,t,i+1);
 	
 }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>t;
        nsub(nums,ans,t,0);
        return ans;

        
    }
};