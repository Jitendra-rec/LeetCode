#include <bits/stdc++.h>
using namespace std;
class trie{
public:
	int data;
	unordered_map<int,trie*>child;
	bool last;

	trie(char c)
	{
		data=c;
		last=false;
	}
};

void insertT(trie* head,string s){
	if(s.size()==0)
	{
		head->last=true;
		return;
	}

	trie* temp;
	int n=s[0];
	if(head->child.count(n)==0)
	{
		temp=new trie(n);
		head->child[n]=temp;	
	}
	else
	{   
		temp=head->child[n];
	}
	insertT(temp,s.substr(1));
}

bool foundT(trie* head,string s){
	
	if(s.size()==0)
	{
		return head->last;
	}
	int n=s[0];
	if(head->child.count(n)==1)
	{
		bool a=foundT(head->child[n],s.substr(1));
		return a;
	}
	else
		return false;
}
bool prefixT(trie* head,string s){
	
	if(s.size()==0)
	{
		return true;
	}
	int n=s[0];
	if(head->child.count(n)==1)
	{
		bool a=prefixT(head->child[n],s.substr(1));
		return a;
	}
	else
		return false;
}

class Trie {
public:
    trie* head;
    Trie() {
        head=new trie('-');
    }
    
    void insert(string word) {
        insertT(head,word);
    }
    
    bool search(string word) {
       return  foundT(head,word);
    }
    
    bool startsWith(string prefix) {
        return prefixT(head,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */