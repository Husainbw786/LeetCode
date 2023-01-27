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
    int maxi = 0;
    void dfs(TreeNode* root, int count)
    {
        if(root == NULL)
        {
            return;
        }
        maxi = max(count,maxi);
        dfs(root->left,count+1);
        dfs(root->right,count+1);
    }
    
    int maxDepth(TreeNode* root) {
        
        if(root == NULL)
        {
            return NULL;
        }
        int count = 1;
        dfs(root,count);
        return maxi;
    }
};