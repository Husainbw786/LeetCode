Node* connect(Node* root) {
if(root==NULL) return root;
queue<Node*> q;
q.push(root);
int s;
while(!q.empty()){
s = q.size();
Node* nx = NULL;
while(s--){
Node* r = q.front();
q.pop();
r->next = nx;
nx=r;
if(r->right) q.push(r->right);
if(r->left) q.push(r->left);
}
}
return root;