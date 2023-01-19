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
    
    void inorder(TreeNode* root, vector<int>&v)
    {
        if(root == NULL)
        {
            return; 
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    
    vector<int> findMode(TreeNode* root) {
        
        unordered_map<int,int>mp;
        vector<int>v;
        inorder(root,v);
        int i;
        for(i=0;i<v.size();i++)
        {
           mp[v[i]]++;  
        }
        int maxi = INT_MIN;
        for(auto x : mp)
        {
            maxi = max(x.second,maxi);
        }
        v.clear();
        for(auto x : mp)
        {
            if(x.second == maxi)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};