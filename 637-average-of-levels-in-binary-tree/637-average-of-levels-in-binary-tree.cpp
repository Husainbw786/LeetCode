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
    vector<double> averageOfLevels(TreeNode* root) {
     
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            double sum = 0;
            int size = q.size();
            int count = 0;
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                count++;
            }
            v.push_back(sum/count);
        }
        return v;
    }
};