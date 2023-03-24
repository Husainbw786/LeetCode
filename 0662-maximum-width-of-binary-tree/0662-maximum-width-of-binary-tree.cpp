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
    int widthOfBinaryTree(TreeNode* root) {
     
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int maxi = 0;
        while(!q.empty())
        {
            int size = q.size();
            int start = q.front().second;
            int end = q.back().second;
            maxi = max(maxi,end - start + 1);
            while(size--)
            {
                TreeNode* temp = q.front().first;
                int x = q.front().second - start;
                q.pop();
                if(temp->left)
                {
                    q.push({temp->left,(long long)2*x + 1});
                }
                if(temp->right)
                {
                    q.push({temp->right,(long long)2*x+2});
                }
            }
        }
        return maxi;
    }
};