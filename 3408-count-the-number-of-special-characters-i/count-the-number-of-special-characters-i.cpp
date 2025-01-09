class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        set<char>st;

        for(auto i:word)
          mp[i]++;


          for(auto i :word)
          {
                if(mp.count(i+32))
                   st.insert(i);
          }
            return st.size();
    }
};