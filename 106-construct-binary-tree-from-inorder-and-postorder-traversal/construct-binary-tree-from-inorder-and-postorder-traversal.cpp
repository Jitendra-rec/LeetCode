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
    int search(vector<int>& inorder,int target)
    {
        for(int i=0; i < inorder.size();i++)
        {
            if(inorder[i]==target)
            return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int s,int e,int &i)
    {
        if( i<0|| s>e)
        return NULL;
        int m=search(inorder,postorder[i]);
        TreeNode* head=new TreeNode(postorder[i]);
        i--;
        head->right=solve(inorder,postorder,m+1,e,i);
        head->left=solve(inorder,postorder,s,m-1,i);
        return head;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=inorder.size()-1,s=0,e=inorder.size()-1;

        TreeNode* head=solve(inorder,postorder,s,e,i);
        return head;
    }
};