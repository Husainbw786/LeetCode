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
    
   void dfs(TreeNode* root, int targetSum,bool &flag,int sum)
    {
        if(root == NULL)
        {
            return;
        }
       sum += root->val;
       if(root->left == NULL && root->right == NULL)
       {
           if(targetSum == sum)
           {
               flag = true;
           }
       }
       dfs(root->left,targetSum,flag,sum);
       dfs(root->right,targetSum,flag,sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        bool flag = false;
        int sum = 0;
        dfs(root,targetSum,flag,sum);
        if(flag)
        {
            return true;
        }
        return false;
    }
};