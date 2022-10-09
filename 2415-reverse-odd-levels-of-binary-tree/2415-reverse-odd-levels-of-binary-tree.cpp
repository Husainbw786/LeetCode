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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        int count = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<TreeNode*>v;
            vector<int>nums;
            int size = q.size();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp);
                nums.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            if(count % 2 != 0)
            {
                reverse(nums.begin(),nums.end());
                for(int i=0;i<v.size();i++)
                {
                    TreeNode* temp = v[i];
                    temp->val = nums[i];
                }
                
            }
            count++;
        }
        return root;
    }
};