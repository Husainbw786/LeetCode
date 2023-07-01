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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int len = 0;
        ListNode* temp = head;
        while(len < k && temp)
        {
            len++;
            temp=temp->next;
        }
        if(len < k)
        {
            return head;
        }
        
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        int count = 0;
        
        while(curr && count < k)
        {
            count++;
            
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(next != NULL)
        {
            head->next = reverseKGroup(next,k);
        }
        
        return prev;
        
    }
};