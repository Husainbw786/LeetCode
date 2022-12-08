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
    
    void check( TreeNode* root2,vector<int>&v2)
    {
        if(root2 == NULL)
        {
            return;
        }
        if(root2->left == NULL && root2->right == NULL)
        {
            v2.push_back(root2->val);
        }
        check(root2->left,v2);
        check(root2->right,v2);
        
    }
        
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int>v1;
        vector<int>v2;
        check(root1,v1);
        check(root2,v2);
        if(v1.size() != v2.size())
        {
            return false;
        }
        int n = v1.size();
        for(int i=0;i<n;i++)
        {
            cout << v1[i] << " " << v2[i] << endl;
            if(v1[i] != v2[i])
            {
                return false;
            }
        }
        
        return true;
    }
};