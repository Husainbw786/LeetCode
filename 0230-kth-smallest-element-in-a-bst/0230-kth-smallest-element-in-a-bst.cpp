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
    
    void dfs(TreeNode* root, vector<int>&v)
    {
        if(root == NULL)
        {
            return;
        }
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>v;
        dfs(root,v);
        int ans = 0;
        for(int i=0;i<v.size();i++)
        {
            if(i == k-1)
            {
                return v[i];
            }
        }
        return ans;
    }
};