class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char ch='a';
        for(auto i:key)
        {   
            if(i!=' '&& mp.find(i)==mp.end())
                mp[i]=ch++;
        }

        // for(auto i:mp)
        // cout<<i.first<<" "<<i.second<<endl;

        for(int i=0;i<message.length();i++)
        {    if(message[i]!=' ')
            message[i]=mp[message[i]];
        }

        return message;

    }
};