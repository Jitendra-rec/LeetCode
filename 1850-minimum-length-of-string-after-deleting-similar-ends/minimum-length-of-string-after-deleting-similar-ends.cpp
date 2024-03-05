class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        bool t=true;
        char c;
       while(i<j)
       {
           if(s[i]!=s[j])
           return j-i+1;
           else
           {    
                 c=s[i];
             
               while(s[i]==c && i<=j )
               {
                   cout<<s[i]<<" ";
                   i++;
               }cout<<"["<<i<<"]";
               while(s[j]==c && i<=j )
               {
                    cout<<s[j]<<"+";
                    j--;
               }cout<<"["<<j<<"]";
               cout<<endl;
             
           }
       }
       return j-i+1;
        
    }
};