class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* temp = head;
int count = 0;
while(temp)
{
count++;
temp = temp->next;
}
if(count == n)
{
return head->next;
}
int k = count - n;
temp = head;
k--;
while(k)
{
k--;
temp = temp->next;
}
temp->next = temp->next->next;
return head;
}
};