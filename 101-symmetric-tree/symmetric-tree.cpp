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
    bool po(TreeNode* r,TreeNode*p)
    {
        if(!r && !p) 
        return true;
        if(r && p)
        {
            return (r->val == p->val )&& po(r->left,p->right) && 
                    po(r->right,p->left);
        }
        return false;

    }
    bool isSymmetric(TreeNode* root) {
        return po(root->left,root->right);

    }
};