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
    void Tsum(TreeNode* root,int& sum)
    {
        if(root==NULL)
        return ;
        
        Tsum(root->right,sum);
          root->val=sum+root->val;
          sum=root->val;
        Tsum(root->left,sum);
       
       

    }
   
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        Tsum(root,sum);
        return root;



    }
};