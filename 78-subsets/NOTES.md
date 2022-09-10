vector<vector<int>> ans;
void recursion(vector<int>& nums,vector<int> v,int n){
if(n == nums.size())
{
ans.push_back(v);
return;
}
v.push_back(nums[n]);
recursion(nums,v,n+1);
v.pop_back();
recursion(nums,v,n+1);
}
​
vector<vector<int>> subsets(vector<int>& nums) {
vector<int> v;
recursion(nums,v,0);
return ans;
}
};