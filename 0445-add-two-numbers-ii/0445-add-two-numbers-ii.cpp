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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* list1 = reverse(l1);
        ListNode* list2 = reverse(l2);
        
        ListNode* ans = new ListNode(0);
        ListNode* head = ans;
        int carry = 0;
        while(list1 && list2)
        {
            int sum = carry + list1->val + list2->val;
            ans->next = new ListNode(sum % 10);
            carry = sum / 10;
            ans = ans ->next;
            list1 = list1->next;
            list2 = list2->next;
        }
        
        while(list1)
        {
            int sum = carry + list1->val;
            ans->next = new ListNode(sum % 10);
            carry = sum / 10;
            ans = ans ->next;
            list1 = list1->next;
        }
        while(list2)
        {
            int sum = carry + list2->val;
            ans->next = new ListNode(sum % 10);
            carry = sum / 10;
            ans = ans ->next;
            list2 = list2->next;
        }
        if(carry)
        {
            ans->next = new ListNode(carry);
            ans = ans->next;
        }
        ListNode* res = reverse(head->next);
        
        return res;
        
        
         
    }
};