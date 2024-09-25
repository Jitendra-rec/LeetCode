class Solution {
public:

bool isnum(char c)
{
    if(c>='0' && c<='9')
    return true;

    return false;
}
    int myAtoi(string s) {
    int i=0,ans=0,end=s.size(),pos=1;

    while(i<end && s[i]==' ')   i++;
    if(i<end && (s[i]=='+' || s[i]=='-'))
    {
        if(s[i]=='+') pos=1;
        if(s[i]=='-') pos=-1;
            i++;
    } 

    while(i<end && isnum(s[i]))
    {
       // cout<<s[i]<<" ";
        if(ans >(INT_MAX/10) || (ans == INT_MAX/10 && s[i]>'7'))
       { 
 
            return pos==1? INT_MAX:INT_MIN;
       }
        ans=ans*10+(s[i]-'0');
        i++;
    } 
    return ans*pos;

    

    }
};