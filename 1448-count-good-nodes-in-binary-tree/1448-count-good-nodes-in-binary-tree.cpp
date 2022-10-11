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
    
   void traverse(TreeNode* root, int &good_nodes, int maxi) {
        if (root == NULL) 
        {
            return;
        }
        if (root->val >= maxi)
        {
            good_nodes++;
        }
        maxi = max(maxi,root->val);
        traverse(root->left,good_nodes,maxi);
        traverse(root->right,good_nodes,maxi);
    }
    
    int goodNodes(TreeNode* root) {
        int good_nodes = 0;
        traverse(root,good_nodes,root->val);
        return good_nodes;
    }
};