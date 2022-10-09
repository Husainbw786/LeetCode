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
    bool isSymmetric(TreeNode* root) {
    
        queue<TreeNode*>q;
        if(root->left == 0 && root->right == 0)
        {
            return true;
        }
        if(root->left == 0 || root->right == 0)
        {
            return false;
        }
        
        q.push(root->left);
        q.push(root->right);
        while(!q.empty())
        {
            TreeNode* temp1 = q.front();
            q.pop();
            TreeNode* temp2 = q.front();
            q.pop();
            if(temp1->val != temp2->val)
            {
                return false;
            }
            if(temp1->val != temp2->val)
            {
                return false;
            }
            if(temp1->left && temp2->right)
            {
                q.push(temp1->left);
                q.push(temp2->right);   
            }
            if((temp1->left && !temp2->right) || (!temp1->left && temp2->right))
            {
                return false;
            }
             if(temp1->right && temp2->left)
            {
                q.push(temp1->right);
                q.push(temp2->left);   
            }
            if((temp1->right && !temp2->left) || (!temp1->right && temp2->left))
            {
                return false;
            }
            
        }
       return true;
    }
};