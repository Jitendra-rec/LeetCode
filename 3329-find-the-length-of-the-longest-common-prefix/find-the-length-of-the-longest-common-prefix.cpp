class tries{
public:
    char val;
    unordered_map<char,tries*>child;
    bool isStop;
    tries(char c)
    {
        val=c;
        isStop=false;
    }
};
void insert(tries* node,string s)
{
    for(auto i: s)
    {
        if((node->child).count(i))
        node=node->child[i];
        else
        {
            tries* temp=new tries(i);
            node->child[i]=temp;
            node=temp;
        }
    }
    node->isStop=true;
}

int maxcommon(tries* node,string s)
{
    int maxi=0;
    for(auto i:s)
    {
        if(node->child.count(i))
        {
            maxi++;
            node=node->child[i];
        }
        else
        return maxi;
        //cout<<maxi;
    }
    return maxi;
}
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        tries *head=new tries('-');
        for(auto i:arr1)
        {
            string temp=to_string(i);
             insert(head,temp);
        }
        int ans=0;
       for(auto i:arr2)
       {
          string temp=to_string(i);
          int a=maxcommon(head,temp);
         // cout<<i<<"--"<<a<<endl;
          ans=max(ans,a);
       }
        return ans;
    }
};