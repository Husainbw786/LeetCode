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
    void dfs(TreeNode* root, bool &flag ,TreeNode* root1)
    {
        
        if(root == NULL)
        {
            return;
        }
        if(root->val != root1->val)
        {
            flag = true;
        }
        dfs(root->left,flag,root1);
        dfs(root->right,flag,root1);
    }
    bool isUnivalTree(TreeNode* root) {
        bool flag = false;
        TreeNode* root1 = root;
        dfs(root,flag,root1);
        
        if(flag == true)
        {
            return false;
        }
        return true;
        
    }
};