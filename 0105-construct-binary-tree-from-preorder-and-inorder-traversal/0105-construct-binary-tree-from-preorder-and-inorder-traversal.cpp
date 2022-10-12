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
    int idx = 0;
    unordered_map<int,int>mp;
    
    TreeNode* BuildTree(vector<int>& inorder,vector<int>& preorder,int low ,int high)
    {
        if(low > high)
        {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[idx]);
        idx++;
        if(low == high)
        {
            return root;
        }
        int mid = mp[root->val];
        root->left = BuildTree(inorder,preorder,low,mid-1);
        root->right = BuildTree(inorder,preorder,mid+1,high);
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     
        int i;
        int n = inorder.size();
        for(i=0;i<n;i++)
        {
            mp[inorder[i]] = i;
        }
        TreeNode* ans = BuildTree(inorder,preorder,0,n-1);
        return ans;
    }
};