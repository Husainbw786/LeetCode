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
    
    void solve(TreeNode* root, int target, long sum, int &count, unordered_map<long,int>&mp)
    {
        if(root == NULL)
        {
            return;
        }
        sum += root->val;
        
        if(sum == target)
        {
            count++;
        }
        if(mp.find(sum-target) != mp.end())
        {
            count += mp[sum - target];
        }
        mp[sum]++;
        solve(root->left,target,sum,count,mp);
        solve(root->right,target,sum,count,mp);
        mp[sum]--;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        
        int count = 0;
        unordered_map<long,int>mp;
        solve(root,targetSum,0,count,mp);
        return count;
    }
};