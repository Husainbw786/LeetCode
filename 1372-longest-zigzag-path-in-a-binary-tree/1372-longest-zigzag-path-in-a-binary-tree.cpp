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
    void solve(TreeNode* root,int direction, int currlength)
    {
        if(root == NULL)
        {
            return ;
        }
        maxi = max(maxi,currlength);
        solve(root->left,1,direction?1:currlength+1);
        solve(root->right,0,direction?currlength+1:1);
        
    }
    
    int longestZigZag(TreeNode* root) 
    {
        solve(root,0,0);
        solve(root,1,0);
        return maxi;
    }
};