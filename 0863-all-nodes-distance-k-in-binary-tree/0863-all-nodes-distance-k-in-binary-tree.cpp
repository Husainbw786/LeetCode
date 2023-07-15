/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void findparent(TreeNode* root,TreeNode* target, unordered_map<TreeNode*,TreeNode*>&mp)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left)
            {
                mp[temp->left] = temp;
                q.push(temp->left);
            }
            if(temp->right)
            {
                mp[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        unordered_map<TreeNode*,TreeNode*>mp;
        findparent(root,target,mp);
        
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target] = true;
        int count = 0;
        while(!q.empty())
        {
            int size = q.size();
            if(count == k)
            {
                break;
            }
            count++;
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left && !vis[temp->left])
                {
                    q.push(temp->left);
                    vis[temp->left] = true;
                }
                if(temp->right && !vis[temp->right])
                {
                    q.push(temp->right);
                    vis[temp->right] = true;
                }
                if(mp[temp] && !vis[mp[temp]])
                {
                    vis[mp[temp]] = true;
                    q.push(mp[temp]);
                } 
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};