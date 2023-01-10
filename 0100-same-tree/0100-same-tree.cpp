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
    
    void inorder(TreeNode* p, TreeNode* q, bool &flag)
    {
        if(p == NULL || q == NULL)
        {
            if(p == NULL && q == NULL)
            {
                return;
            }
            else
            {
                flag = true;
                return;
            }
        }
        if(p->left)
        {
            if(q->left)
            {
                if(p->left->val != q->left->val)
                {
                    flag = true;
                    return;
                }
            }
            else
            {
                flag = true;
                return;
            }
        }
        if(p->right)
        {
            if(q->right)
            {
                if(p->right->val != q->right->val)
                {
                    flag = true;
                    return;
                }
            }
            else
            {
                flag = true;
                return;
            }
        }
        if(p->val != q->val)
        {
            flag = true;
            return;
        }
        inorder(p->left,q->left,flag);
        inorder(p->right,q->right,flag);
        
    }
        
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
             bool flag = false;
             inorder(p,q,flag);
             if(!flag)
             {
                 return true;
             }
        return false;
    }
};