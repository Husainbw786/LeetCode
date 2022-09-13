/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
     if(root == NULL)
     {
         return NULL;
     }
        queue<Node*>q;
        q.push(root);
        int count = 0;
        int power = 0;
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
             count++;
            if(pow (2,power) != count)
            {
                temp->next = q.front();
               
            }
            else
            {
                count = 0;
                power++;
                temp->next = NULL;
            }
            if(temp->left)
            {
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        
        return root;
    }
};