class Solution {
public:
bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
vector<int> ans = {INT_MIN, INT_MIN, INT_MIN};
​
for(int i=0; i<triplets.size(); i++) {
vector<int> tmp = ans;
bool flag = true;
​
for(int j=0; j<3; j++) {
tmp[j] = max(tmp[j], triplets[i][j]);
​
if(tmp[j] > target[j]) {
flag = false;
break;
}
}
​
if(flag) ans = tmp;
if(ans == target) return true;
}
return false;
}
};