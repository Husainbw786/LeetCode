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
    
    void dfs(TreeNode* root, int maxi, int &good_node)
    {
        if(root == NULL)
        {
            return;
        }
        if(maxi <= root->val)
        {
            good_node++;
        }
        maxi = max(maxi,root->val);
        dfs(root->left,maxi,good_node);
        dfs(root->right,maxi,good_node);
    }
    
    int goodNodes(TreeNode* root) {
        
        int good_node = 0;
        int maxi = INT_MIN;
        dfs(root,maxi,good_node);
        return good_node;
    }
};