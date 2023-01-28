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
    
    vector<string>v;
    
    void dfs(TreeNode* root, string temp)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            temp += char(root->val + 'a');
            reverse(temp.begin(),temp.end());
            v.push_back(temp);
            return;
        }
        dfs(root->left,temp+char(root->val + 'a'));
        dfs(root->right,temp+char(root->val + 'a'));
    }
    
    string smallestFromLeaf(TreeNode* root) {
        
       string temp = "";
       if(root == NULL)
       {
           return temp;
       }
       dfs(root,temp);
        sort(v.begin(),v.end());
        return v[0];
        
    }
};