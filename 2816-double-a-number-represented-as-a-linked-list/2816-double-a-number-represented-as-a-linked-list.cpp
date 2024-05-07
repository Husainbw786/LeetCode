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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* nxt = nullptr;
        ListNode* prev = nullptr;
        while (curr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    ListNode* add(ListNode* l1, ListNode* l2) {
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int carry = 0, sum = 0;
        ListNode* temp1 = reverse(l1);
        ListNode* temp2 = reverse(l2);
        
        while (temp1 && temp2) {
            sum = temp1->val + temp2->val + carry;
            dummy->next = new ListNode(sum % 10);
            carry = sum / 10;
            dummy = dummy->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        while (temp1) {
            sum = temp1->val + carry;
            dummy->next = new ListNode(sum % 10);
            carry = sum / 10;
            dummy = dummy->next;
            temp1 = temp1->next;
        }
        
        while (temp2) 
        {
            sum = temp2->val + carry;
            dummy->next = new ListNode(sum % 10);
            carry = sum / 10;
            dummy = dummy->next;
            temp2 = temp2->next;
        }
        
        if (carry) {
            dummy->next = new ListNode(carry);
        }
        
        ListNode* res = reverse(ans->next);
        delete ans;
        return res;
    }
    
    ListNode* doubleIt(ListNode* head) 
    {
        if (!head)
        {
            return nullptr;
        }
        ListNode* head2 = new ListNode(head->val);
        ListNode* current_new = head2;
        ListNode* current_old = head->next;

        while (current_old)
        {
            ListNode* new_node = new ListNode(current_old->val);
            current_new->next = new_node;
            current_new = new_node;
            current_old = current_old->next;
        }
        
        return add(head, head2);
    }
};
