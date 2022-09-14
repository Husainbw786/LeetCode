int distance = INT_MAX;
int validpt =-1;
for(int i=0;i<nums.size();i++)//traversing rows
{
if(nums[i][0]==x || nums[i][1]==y)
{
int tempdist = abs(x-nums[i][0])+abs(y-nums[i][1]);
if(distance >tempdist) //we are not using equal to coz we store lower index
{
validpt = i;
distance = tempdist;
}
}
}
return validpt;
}