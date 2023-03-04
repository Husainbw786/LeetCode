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
    
    void inorder(TreeNode* root, vector<int>&v, string temp)
    {
        if(root == NULL)
        {
            return;
        }
        temp += to_string(root->val);
        if(root->left == NULL && root->right == NULL)
        {
            int x = stoi(temp);
            v.push_back(x);
        }
        inorder(root->left,v,temp);
        inorder(root->right,v,temp);
    }
    
    int sumNumbers(TreeNode* root) {
     
        vector<int>v;
        int ans = 0;
        string temp = "";
        if(root == NULL)
        {
            return 0;
        }
        inorder(root,v,temp);
        for(int i=0;i<v.size();i++)
        {
            ans += v[i];
        }
        return ans;
    }
};