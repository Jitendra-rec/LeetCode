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
    TreeNode* solve(vector<int>& nums,int s,int e)
    {
        if(s>e)
        return NULL;
        int mid=(s+e)/2;
        TreeNode* head=new TreeNode(nums[mid]);
        head->left=solve(nums,s,mid-1);
        head->right=solve(nums,mid+1,e);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* head =solve(nums,0,nums.size()-1);
        return head;
    }
};