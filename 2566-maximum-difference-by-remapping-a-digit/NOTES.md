class Solution {
public:
int minMaxDifference(int num) {
vector<int>v,v1;
while(num)
{
int rem = num % 10;
v.push_back(rem);
v1.push_back(rem);
num = num / 10;
}
reverse(v.begin(),v.end());
int x = 0;
while(v[x] == 9)
{
x++;
}
int y = v[x];
int maxi = 0;
int mini = 0;
int z = v1[0];
int i;
for(i=0;i<v.size();i++)
{
if(v[i] == y)