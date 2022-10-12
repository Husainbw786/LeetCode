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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root == NULL)
        {
            return v;
        }
        deque<TreeNode*>dq;
      
        dq.push_back(root);
        while(!dq.empty())
        {
            int size = dq.size();
            v.push_back(dq.back()->val);
            while(size--)
            {
                TreeNode* temp = dq.front();
                dq.pop_front();
                if(temp->left)
                {
                    dq.push_back(temp->left);
                }
                if(temp->right)
                {
                    dq.push_back(temp->right);
                }
                
            }
        }
        return v;
    }
};