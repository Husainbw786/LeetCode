class Solution {
public:
int findGCD(vector<int>& nums) {
// first loop through and find the largest and smallest numbers
// Then find the greatest common divisor of largest and smallest
​
int smallest = nums[0], largest = nums[0];
for(int i = 0; i< nums.size(); i++){
if(nums[i]<smallest){
smallest = nums[i];
}
if(nums[i]>largest){
largest = nums[i];
}
}
​
return gcd(smallest, largest);
}
​
int gcd(int a, int b){
int ans = 1;
for(int i=1; i<=a; i++){
if(a%i == 0 && b%i == 0){
ans = i;
}
}
return ans;
}
};