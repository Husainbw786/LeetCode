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
    
    int max(vector<int>&arr,int l,int r)
    {
        int idx = 0;
        int mx = INT_MIN;
        for(int i=l;i<=r;i++)
        {
            if(arr[i] > mx)
            {
                mx = arr[i];
                idx = i;
            }
        }
        return idx;
    }
    
    TreeNode* solve(vector<int>&arr,int l,int r)
    {
        if(l > r)
        {
            return NULL;
        }
        int i = max(arr,l,r);
        TreeNode* newnode = new TreeNode(arr[i]);
        newnode->left = solve(arr,l,i-1);
        newnode->right = solve(arr,i+1,r);
        return newnode;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        if(nums.size() == 0)
        {
            return NULL;
        }
        return solve(nums,0,nums.size()-1);
    }
};