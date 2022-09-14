class Solution {
public:
int countKDifference(vector<int>& nums, int k) {
int i = 0;
int j = 0;
int count = 0;
for(auto j= 1;j<nums.size();j++){
if(i<j){
if(nums[i]-nums[j]==k||nums[j]-nums[i]==k){
count++;
}
}
if(j==nums.size()-1){
i++;
j = i;
}
}
return count;
}
};