class Solution {
public:
ListNode* reverseList(ListNode* head) {
if(head==NULL)
return head;
ListNode* prev=NULL, *currNode=head;
while(currNode!=NULL){
ListNode* temp=currNode->next;
currNode->next=prev;
prev=currNode;
currNode=temp;
}
return prev;
}
​
​
void reorderList(ListNode* head) {
//Finding the mid node
ListNode *slow=head, *fast=head->next;
while(fast && fast->next){
slow=slow->next;
fast=fast->next->next;
}
​
//Reversing the second list
ListNode *first = head, *second = slow->next;
second=reverseList(slow->next);
slow->next = NULL;
​
//Merging the two lists
while(second!=NULL){
ListNode *temp1 = first->next, *temp2 = second->next;
first->next=second;
second->next=temp1;
first=temp1;
second=temp2;
}
}
};