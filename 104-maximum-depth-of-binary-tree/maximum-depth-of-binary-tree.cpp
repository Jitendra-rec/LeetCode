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
    void solve(TreeNode* root,int &md,int temp)
    {
        if(root == NULL)
        {
            md=max(md,temp);
            return ;
        }
        solve(root->left,md,temp+1);
        solve(root->right,md,temp+1);
    }
    int maxDepth(TreeNode* root) {

        int maxi=0;

        solve(root,maxi,0);
        return maxi;

        
    }
};