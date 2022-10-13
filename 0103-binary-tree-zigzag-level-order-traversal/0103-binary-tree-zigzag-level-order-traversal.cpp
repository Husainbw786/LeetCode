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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        int count = 0;
        vector<vector<int>>ans;
        if(root == NULL)
        {
            return ans;
        }
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            count++;
            int size = q.size();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                    if(temp->left)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
               
            }
            if(count % 2 == 0)
            {
                reverse(v.begin(),v.end());
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};