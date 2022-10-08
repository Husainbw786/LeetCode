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
    
    void dfs(TreeNode* root,vector<string>&v , string st)
    {
        if(root->left == NULL && root->right == NULL)
        {
            v.push_back(st);
            return;
        }
        if(root->left) 
        {
         dfs(root->left,v,st + "->" + to_string(root->left->val));
        }
       
        if(root->right)
        {
         dfs(root->right,v,st + "->" + to_string(root->right->val));
        }
        
         
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>v;
        string st = "";
        dfs(root,v,to_string(root->val));
        return v;
    }
};