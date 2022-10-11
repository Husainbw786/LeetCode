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
    
    TreeNode* BuildTree(TreeNode* &ans,int val)
    {
        if(ans == NULL)
        {
            ans = new TreeNode(val);
            return ans;
        }
        if(ans->val > val)
        {
            ans->left = BuildTree(ans->left,val);
        }
        if(ans->val < val)
        {
            ans->right = BuildTree(ans->right,val);
        }
        return ans;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        vector<int>v;
        dfs(root,v);
        v.push_back(val);
        sort(v.begin(),v.end());
        
        TreeNode* ans = NULL;
        for(auto x : v)
        BuildTree(ans,x);
        return ans;
    }
};