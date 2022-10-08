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
    
    int dfs(TreeNode* root,int &mini,int & val)
    {
        if(root->left != NULL)
        {
            dfs(root->left,mini,val);
        }
        if(val >= 0)
        {
            mini = min(mini,root->val - val);
        }
        val = root->val;
        if(root->right != NULL)
        {
          dfs(root->right,mini,val);  
        }
        
         return mini;
    }
    
    int getMinimumDifference(TreeNode* root) {
        
    
        int val = -1;
        int mini = INT_MAX;
       return dfs(root,mini,val);
        
       
    }
};