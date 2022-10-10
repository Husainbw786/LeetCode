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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root == NULL)
        {
            return NULL;
        }
        int count = 1;
        int mini = INT_MAX;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left == NULL && temp->right == NULL)
                {
                    mini = min(count,mini);
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            count++;
        }
        return mini;
    }
};