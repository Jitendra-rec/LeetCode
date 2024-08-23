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
    void rightV(TreeNode* root,vector<int>&ans,int n)
    {
        if(root==NULL)
        return;
        if(ans.size()==n)
        {
            ans.push_back(root->val);
        }
        rightV(root->right,ans,n+1);
        rightV(root->left,ans,n+1);
        return;


    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightV(root,ans,0);
        return ans;
    }
};