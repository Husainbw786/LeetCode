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
    int maxLevelSum(TreeNode* root) {
        
        int level;
        queue<TreeNode*>q;
        q.push(root);
        int sum = INT_MIN;
        int count = 0;
        while(!q.empty())
        {
            count++;
            int size = q.size();
            int temp_sum = 0;
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                 temp_sum += temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            if(sum < temp_sum)
            {
                sum = temp_sum;
                level = count;
            }
        }
        return level;
    }
};