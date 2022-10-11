void traverse(TreeNode* root, int &ans, int val) {
if (root == NULL) return;
if (root->val >= val) ++ans;
val = max(val,root->val);
traverse(root->left,ans,val);
traverse(root->right,ans,val);
}
int goodNodes(TreeNode* root) {
int ans = 0;
traverse(root,ans,root->val);
return ans;
}