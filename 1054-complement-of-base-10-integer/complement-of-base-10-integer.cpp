class Solution {
public:
    int bitwiseComplement(int a) {
        if(a==0) return 1;
        int n=log2(a);
        a=~a;
        string s=bitset<64>(a).to_string().substr(64-n-1);
        int ans=stoi(s,0,2);
        return ans;
    }
};