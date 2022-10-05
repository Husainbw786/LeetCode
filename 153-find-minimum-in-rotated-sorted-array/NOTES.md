int n=nums.size();
int low =0,high=n-1;
int mini=INT_MAX;
while(low<=high){
// int mid=(low+high)/2;
if(nums[low]<mini){
mini=nums[low];
low++;
}
else if(nums[high]<mini){
mini=nums[high];
high--;
}
else{
low++;
high--;
}
}
return mini;