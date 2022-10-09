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
    
  int dfs(TreeNode* root, int & maxi)
  {
      if(root == NULL)
      {
          return 0;
      }
      int x = dfs(root->left,maxi);
      int y = dfs(root->right,maxi);
      maxi = max(maxi,x+y);
      return (max(x,y)+1);
  }
    
    int diameterOfBinaryTree(TreeNode* root) {
     
        int maxi = INT_MIN;
        dfs(root,maxi);
        return maxi;
    }
};