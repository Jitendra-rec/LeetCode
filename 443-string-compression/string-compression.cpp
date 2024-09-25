class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, str=0, len=chars.size(),count=0;
        char c=chars[0];

        while(i<len)
        {
            if(chars[i]==c)
            {
                i++;count++;
            }
            else if(chars[i]!=c)
            {
                
                chars[str]=c;
                str++;
                c=chars[i];
                string temp=to_string(count);
                cout<<c<<" "<<temp<<endl;
                if(count>1)
                {  for(auto j:temp)
                    chars[str++]=j;
                }
                    count=1;
                    i++;
    
            }
        }
        chars[str++]=chars[len-1];
        if(count>1)
        {  
             string temp=to_string(count);
             for(auto j:temp)
            chars[str++]=j;
        }

       return str; 
    }
};