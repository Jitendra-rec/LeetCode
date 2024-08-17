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
    bool solve(TreeNode* root, int targetSum)
    {
        if(root==NULL)
            return false;
            targetSum-=root->val;
        if(root->left==NULL && root->right==NULL)
            return targetSum ? false:true; 

        bool a=solve(root->left, targetSum);
        bool b=solve(root->right, targetSum);

        return a|b;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL && targetSum==0)
            return false; 

    
        return solve(root,targetSum);
        
    }
};