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
    
   void traverse(TreeNode* root, int &ans, int val) {
        if (root == NULL) return;
        if (root->val >= val) ++ans;
        val = max(val,root->val);
        traverse(root->left,ans,val);
        traverse(root->right,ans,val);
    }
    
    int goodNodes(TreeNode* root) {
        int ans = 0;
        traverse(root,ans,root->val);
        return ans;
    }
};