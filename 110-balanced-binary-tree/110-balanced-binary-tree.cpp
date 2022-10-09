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
    
    bool flag = true; 
    int solve(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int x = solve(root->left);
        int y = solve(root->right);
        if(abs(x-y) > 1)
        {
            flag = false;
        }
        return 1 + max(x,y);
    }
    bool isBalanced(TreeNode* root) {
        
        solve(root);
        if(flag)
        {
            return true;
        }
        return false;
    }
};