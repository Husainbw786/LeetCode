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

    TreeNode* lca(TreeNode* root,TreeNode* p, TreeNode* q)
    {
        if(!root || root == p || root == q)
        {
            return root;
        }
        TreeNode* left = lca(root->left,p,q);
        TreeNode* right = lca(root->right,p,q);
        
        if(left && right)
        {
            return root;
        }
        else if(!left)
        {
            return right;
        }
        else
        {
            return left;
        }
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        
        TreeNode* first;
        TreeNode* last;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            first = q.front();
            last = q.back();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        TreeNode* ans = lca(root,first,last);
        return ans;
    }
};