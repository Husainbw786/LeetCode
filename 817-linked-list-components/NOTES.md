​
***********************************************************************************
class Solution {
public:
int numComponents(ListNode* head, vector<int>& nums) {
sort(nums.begin(),nums.end());
int x = nums[nums.size()-1];
ListNode* temp = head;
int count = 0;
int i = 0;
while(temp != NULL)
{
bool flag = false;
while(temp->val != nums[i] && temp->next != NULL)
{
temp = temp->next;
i++;
flag = true;
}
if(flag == true)
{
count++;
}
if(temp->next == NULL && temp->val == nums[i])
{
count++;
}
if(temp->val > nums[i])
{
i++;
}
else
{
temp = temp->next;
}
}
return count;