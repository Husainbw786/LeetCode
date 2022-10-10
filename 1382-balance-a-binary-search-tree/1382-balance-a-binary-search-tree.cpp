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
    
    void inorder(TreeNode* root, vector<TreeNode*>&v)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }
    TreeNode* buildTree(int start,int end,vector<TreeNode*>v)
    {
        if(start > end)
        {
            return NULL;
        }
        int mid = (start + end)/ 2;
        TreeNode* root = v[mid];
        root->left = buildTree(start,mid-1,v);
        root->right = buildTree(mid+1,end,v);
        return root;
    }
    
    
    TreeNode* balanceBST(TreeNode* root) {
        
        if(root == NULL)
        {
            return NULL;
        }
        vector<TreeNode*>v;
        inorder(root,v);
        int n = v.size();
        root = buildTree(0,n-1,v);
        return root;
        
        
    }
};