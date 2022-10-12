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
    
    unordered_map<int,int>mp;
    TreeNode* BUILD(vector<int>& inorder, vector<int>& postorder,int low ,int high, int &index)
    {
        if(low > high)
        {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[index]);
        index--;
        if(low == high)
        {
            return root;
        }
        int mid = mp[root->val];
        root->right = BUILD(inorder,postorder,mid+1,high,index);
        root->left = BUILD(inorder,postorder,low,mid-1,index);
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]] = i;
        }
        int index = n-1;
        TreeNode* ans = BUILD(inorder,postorder,0,n-1,index);
        return ans;
        
    }
};