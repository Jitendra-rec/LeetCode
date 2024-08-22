/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findm(vector<int>& inorder,int target)
    {
        for(int i=0; i < inorder.size();i++)
        {
            if(inorder[i]==target)
            return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &i,int s,int e,int size)
    {   if(i==size)
            return NULL;
        if(s>e)
            return NULL;
        
        int m=findm(inorder,preorder[i]);
        TreeNode* root=new TreeNode(preorder[i]);
        i++;
        root->left=solve(preorder,inorder, i, s, m-1, size);
        root->right=solve(preorder,inorder,i, m+1, e,size);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0,s=0,e=preorder.size()-1,size=preorder.size();
         TreeNode* root=solve(preorder,inorder, i, s,e, size);
         return root;
    }
};