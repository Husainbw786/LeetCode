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
        if(root == NULL || root == p || root == q)
        {
            return root;
        }
        
        TreeNode* l = lca(root->left,p,q);
        TreeNode* r = lca(root->right,p,q);

        if(l && r)
        {
            return root;
        }
        if(!l)
        {
            return r;
        }
        return l;
    }
    
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* first; 
        TreeNode* second;
        while(!q.empty())
        {
            int size = q.size();
            first = q.front();
            second = q.back();
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
        
        TreeNode* ans = lca(root,first,second);
        return ans;

    }
};