ListNode*ptr= head;
int size = 0;
while(ptr){
size++;
ptr=ptr->next;
}
if(size == n)
return head->next;
ptr = head;
ListNode* ptr2 = head;
for(int x = 0; x < size-n; x++){
ptr = ptr->next;
if(x != 0)
ptr2=ptr2->next;
}
ptr =ptr->next;
ptr2->next = ptr;
return head;