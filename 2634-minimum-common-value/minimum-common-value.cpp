class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        
        int i=0,j=0,l1=n1.size(),l2=n2.size();
        while(i<l1 && j<l2 && n1[i]!=n2[j])
        {
             cout<<n1[i]<<". "<<n2[j]<<endl;
            if(n1[i]==n2[j])
            return n1[i];
            else if(n1[i]>n2[j])
            j++;
            else i++;
        }
       if(i<l1 && j<l2 && n1[i]==n2[j])
            return n1[i];
        return -1;
    }
};