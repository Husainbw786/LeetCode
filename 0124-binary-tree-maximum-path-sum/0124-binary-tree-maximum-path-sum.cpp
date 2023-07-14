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
    
    int maxi = INT_MIN;
    
    int check(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int lsum = max(0,check(root->left));
        int rsum = max(0,check(root->right));
        
        maxi = max(maxi,rsum+lsum+root->val);
        
        return max(lsum,rsum) + root->val;
    }
    
    
    int maxPathSum(TreeNode* root) {
       
        check(root);
        return maxi;
        
    }
};