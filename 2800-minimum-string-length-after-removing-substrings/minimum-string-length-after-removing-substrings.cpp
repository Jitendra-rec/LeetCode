class Solution {
public:
    int minLength(string s) {
        int a=s.find("AB");
        int b=s.find("CD");
        while(a!=-1 || b!=-1)
        {
            if(a!=-1)
            s.erase(a,2);
            b=s.find("CD");
            if(b!=-1)
            s.erase(b,2);
            a=s.find("AB");
            b=s.find("CD");
        }
        return s.size();
    }
};