/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void dfs(Node* root,int count,int &maxi)
    {
        if(root == NULL)
        {
            return;
        }
        maxi = max(count,maxi);
        for(int i=0;i< root->children.size();i++)
        {
            dfs(root->children[i],count+1,maxi);
        }
    }
    
    int maxDepth(Node* root) {
        if(root == NULL)
        {
            return 0;
        }
     int count = 1;
        int max = 0;
        dfs(root,count,max);
        return max;
    }
};