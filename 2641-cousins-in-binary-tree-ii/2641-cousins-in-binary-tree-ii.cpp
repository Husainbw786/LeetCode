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
    TreeNode* replaceValueInTree(TreeNode* root) {
        
        if(root == NULL)
        {
            return NULL;
        }
        root->val = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sum = 0;
            int size = q.size();
            vector<TreeNode*>v;
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp);
                if(temp->left)
                {
                    q.push(temp->left);
                    sum += temp->left->val;
                }
                if(temp->right)
                {
                    q.push(temp->right);
                    sum += temp->right->val;
                }
            }
            for(int i=0;i<v.size();i++)
            {
                int x = sum;
                if(v[i]->left)
                {
                    x -= v[i]->left->val;
                }
                if(v[i]->right)
                {
                    x -= v[i]->right->val;
                }
                if(v[i]->left)
                {
                    v[i]->left->val = x;
                }
                if(v[i]->right)
                {
                    v[i]->right->val = x;
                }
            }
            
        }
        return root;
    }
};