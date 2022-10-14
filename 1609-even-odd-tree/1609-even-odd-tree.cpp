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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        int count = 0;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(count % 2 == 0)
                {
                    if(temp->val % 2 == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    if(temp->val % 2 != 0)
                    {
                        return false;
                    }
                }
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
            int n = v.size();
            if(count % 2 == 0)
            {
                 for(int i=1;i<n;i++)
                {
                    if(v[i] <= v[i-1])
                    {
                        return false;
                    }
                }
            }
            else
            {
                 for(int i=1;i<n;i++)
                {
                    if(v[i] >= v[i-1])
                    {
                        return false;
                    }
                }
            }
            v.clear();
            count++;
        }
        return true;
    }
};