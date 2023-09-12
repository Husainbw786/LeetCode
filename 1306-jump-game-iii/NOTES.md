class Solution {
public:
bool can(vector<int>&a, vector<bool> &vis, int pos){
if(pos<0 or pos>=a.size() or vis[pos]) return false;
if(a[pos]==0) return true;
vis[pos]=true;
return can(a,vis,pos+a[pos]) or can(a,vis,pos-a[pos]);
}
bool canReach(vector<int>& a,  int start) {
int n=a.size();
vector<bool> vis(n,false);
return can(a,vis,start);
}
};