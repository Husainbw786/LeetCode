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
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 1;
        while(count != left)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        ListNode* start = temp;
        while(count != right)
        {
            temp = temp->next;
            count++;
        }
        ListNode* rest = temp->next;
        temp->next = NULL;
        ListNode* newHead = reverse(start);
        if(prev != NULL)
        {
            prev->next = newHead;
        }
        temp = newHead;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = rest;
        if(left == 1)
        {
            return newHead;
        }
        else
        {
           return head; 
        }
        
    }
};