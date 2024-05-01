class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.find(ch);
        string str="";
        cout<<n<<endl;
        if(n!=-1)
        reverse(word.begin(),word.begin()+n+1);
        cout<<word;
        return word;
    }
};