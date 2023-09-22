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
    
    vector<vector<int>>ans;
    void solve(TreeNode* root, int target, int sum,vector<int>temp)
    {
        if(root == NULL)
        {
            return;
        }
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL )
        {
            //sum += root->val;
            if(sum == target)
            {
                ans.push_back(temp);
                return;
            }
        }
        solve(root->left,target,sum,temp);
        solve(root->right,target,sum,temp);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int>temp;
        
        solve(root,targetSum,0,temp);
        return ans;
    }
};