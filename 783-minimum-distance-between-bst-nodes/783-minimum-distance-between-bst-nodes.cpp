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
    
    void dfs(TreeNode* root , vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
    
    int minDiffInBST(TreeNode* root) {
        
        vector<int>v;
        dfs(root,v);
        int mini = INT_MAX;
        for(int i=1;i<v.size();i++)
        {
            mini = min(v[i]-v[i-1],mini);
        }
        return mini;
        
    }
};