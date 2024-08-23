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
    int getmin(TreeNode* root)
    {
        if(root==NULL)
        return -1;
        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;
        if(root->val==key)
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            if(root->left!=NULL && root->right==NULL)
            {
                TreeNode* temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
             if(root->left==NULL && root->right!=NULL)
            {
                TreeNode* temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            if(root->left!=NULL && root->right!=NULL)
            {
                int minval=getmin(root->right);
                root->val=minval;
                root->right=deleteNode(root->right,minval);
                return root;                
            }
            
        }
        else
        {
            if(root->val >key)
            root->left=deleteNode(root->left,key);
            else
            root->right=deleteNode(root->right, key);
        }
        return root;
        
    }
};