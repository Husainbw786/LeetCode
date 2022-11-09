/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        ListNode* head = new ListNode();
        ListNode* headClone = head;
        bool carry = false;
        int sum = l1->val + l2->val;
        if(sum > 9)
        {
            headClone->val = sum % 10;
            carry = true;
        }
        else
        {
            headClone->val = sum;
        }
        l1 = l1->next;
        l2 = l2->next;
        while(l1 && l2)
        {
            ListNode* temp = new ListNode();
            sum = l1->val + l2->val;
            if(carry)
            {
                sum++;
                carry = false;
            }
            if(sum > 9)
            {
                temp->val = sum % 10;
                carry = true;
            }
            else
            {
                temp->val = sum;
            }
            headClone->next = temp;
            headClone = headClone->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(!l1)
        {
            l1 = l2;
        }
        while(l1)
        {
             ListNode* temp = new ListNode();
            sum = l1->val;
            if(carry)
            {
                sum++;
                carry = false;
            }
            if(sum > 9)
            {
                temp->val = sum % 10;
                carry = true;
            }
            else
            {
                temp->val = sum;
            }
            headClone->next = temp;
            headClone = headClone->next;
            l1 = l1->next;
            
        }
        if(carry)
        {
            ListNode *temp = new ListNode();
            temp->val = 1;
            headClone->next = temp;
        }
        return head;
        
    }
};