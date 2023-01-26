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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            TreeNode* temp = q.front().first;
            int x = q.front().second.first;
            int y = q.front().second.second;
            q.pop();
            mp[x][y].insert(temp->val);
            if(temp->left)
            {
              q.push({temp->left,{x-1,y+1}});    
            }
            if(temp->right)
            {
              q.push({temp->right,{x+1,y+1}});    
            }
            
        }
        vector<vector<int>>ans;
        for(auto x : mp)
        {
            vector<int>v;
            for(auto i : x.second)
            {
                v.insert(v.end(),i.second.begin(),i.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};