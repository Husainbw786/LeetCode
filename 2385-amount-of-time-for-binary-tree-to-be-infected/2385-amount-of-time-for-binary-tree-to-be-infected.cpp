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
    
    void find_parent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&mp)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                mp[temp->left] = temp;
            }
            if(temp->right)
            {
                q.push(temp->right);
                mp[temp->right] = temp;
            }
        }
    }
    
    TreeNode* find(TreeNode* root, int x ,TreeNode* &f)
    {
        if(root == NULL)
        {
            return NULL;
        }
        if(root->val == x)
        {
            f = root;
            return root;
            
        }
        find(root->left,x,f);
        find(root->right,x,f);
        
        return root;
    }
    
    
    int amountOfTime(TreeNode* root, int start) {
        
        unordered_map<TreeNode*,TreeNode*>mp;
        find_parent(root,mp);
        
        queue<TreeNode*>q;
        unordered_map<TreeNode*,bool>vis;
        TreeNode* f; 
        find(root,start ,f);

        int time = 0;
        q.push(f);
        vis[f] = true;
        
        while(!q.empty())
        {
            time++;
            int size = q.size();
            bool flag = false;
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left && !vis[temp->left])
                {
                    vis[temp->left] = true;
                    q.push(temp->left);
                    flag = true;
                }
                if(temp->right && !vis[temp->right])
                {
                    vis[temp->right] = true;
                    q.push(temp->right);
                    flag = true;
                }
                if(mp[temp] && !vis[mp[temp]])
                {
                    vis[mp[temp]] = true;
                    q.push(mp[temp]);
                    flag = true;
                }
            }
            if(!flag)
            {
                break;
            }
            
        }
        return time-1;
                
    }
};