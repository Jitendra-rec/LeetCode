class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return Xor(nums, 0, 0);
    }
int Xor(vector<int> s,int i,int sum)
{
	if(i==s.size())
			return sum ;	
	return Xor(s,i+1,sum^s[i])+Xor(s,i+1,sum ); 		
}
};