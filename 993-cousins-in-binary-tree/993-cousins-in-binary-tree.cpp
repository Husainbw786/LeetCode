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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*>q;
        q.push(root);
       
        while(!q.empty())
        {
            int size = q.size();
             bool found_x = false;
             bool found_y = false;
           
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->val == x)
                {
                    found_x = true;
                }
                if(temp->val == y)
                {
                    found_y = true;
                }
                if(temp->left && temp->right)
                {
                    if((temp->left->val == x && temp->right->val == y) || (temp->right->val == x && temp->left->val == y))
                    {
                        return false;
                    }
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
            if(found_x && found_y)
            {
                return true;
            }
        }
        
        return false;
    }
};