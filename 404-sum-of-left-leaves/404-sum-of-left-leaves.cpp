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
    int sumOfLeftLeaves(TreeNode* root) {
        
        queue<pair<TreeNode*,bool>>q;
        int sum = 0;
        q.push({root,false});
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                TreeNode* temp = q.front().first;
                bool flag = q.front().second;
                q.pop();
                if(temp->left == NULL && temp->right  == NULL && flag )
                {
                    sum += temp->val;
                }
                if(temp->left)
                {
                    q.push({temp->left,true});
                }
                if(temp->right)
                {
                    q.push({temp->right,false});
                }
            }
        }
        return sum;
    }
};