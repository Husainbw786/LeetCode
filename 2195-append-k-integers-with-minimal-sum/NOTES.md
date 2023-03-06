class Solution {
public:
long long minimalKSum(vector<int>& arr, long long int k) {
set<long long int> s;//read the approach first
long long int sum=0;
for(long long int i:arr)
{
s.insert(i);
}
for(long long int j:s)
{
if(j<=k)
{
k++;
sum+=j;
}
if(j>k)
break;
}
long long int r=((k*(k+1))/2);
sum=r-sum;
return sum;
}
};