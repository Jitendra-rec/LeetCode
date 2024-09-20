class Solution {
public:
 bool check(char s)
 {
     if((s >='a' && s <='z') || (s>='A' && s <='Z'))
     return true;
     return false;

 }
    string reverseOnlyLetters(string s) {
        
        int i=0,j=s.length()-1;
       // cout<<check('_')<<endl;
        while(i<j)
        {
            while(i<j && !check(s[i])) i++;
            while(j>=0 && !check(s[j])) j--;
            //  cout<<i<<" "<<j<<endl;
             if(i<=j)
             swap(s[i++],s[j--]);
        }
        return s;
    }
};