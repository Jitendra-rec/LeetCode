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
  void hasPathSum(TreeNode* root, int targetSum,vector<vector<int>>&ans,vector<int>t) {
        if(root==NULL)
            return;
            targetSum-=root->val;
            t.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
           { if(targetSum==0)
                ans.push_back(t);
              //  t.pop_back();
           }
        

        hasPathSum(root->left, targetSum,ans,t);
        hasPathSum(root->right, targetSum,ans,t);
      //  if(root->left!=NULL || root->right!=NULL)
       // t.pop_back();
       

    
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>t;

         hasPathSum(root,targetSum,ans,t);
         return ans;
    }
};