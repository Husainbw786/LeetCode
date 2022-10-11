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
class FindElements {
public:
    set<int>tree;
    void dfs(TreeNode* root , int v)
    {
        if(root == NULL)
        {
            return;
        }
        tree.insert(v);
        dfs(root->left,2*v+1);
        dfs(root->right,2*v+2);
    }
    
    FindElements(TreeNode* root) {
        dfs(root,0);
        
    }
    
    bool find(int target) {
        return tree.find(target) != tree.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */