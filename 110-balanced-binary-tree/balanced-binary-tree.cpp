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
    int height(TreeNode* root)
    {
        if(root==NULL)
        return 0;
       int left= height(root->left);
       int right=height(root->right);
        int h=max(left,right);
        return 1+h;
    }
    bool isBalanced(TreeNode* root) {
        if(root== NULL)
        return true;
        int len=abs(height(root->left) - height(root->right));
        bool ans=true;
        if(len<=1)
         ans= true;
        else 
         ans =false;
        bool a=isBalanced(root->left);
        bool b=isBalanced(root->right);
        return a && b && ans;
    }
};