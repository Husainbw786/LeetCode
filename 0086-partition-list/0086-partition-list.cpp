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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);
        ListNode* small_head = small;
        ListNode* large_head = large;
        ListNode* temp = head;
        
        
        while(temp != NULL)
        {
            if(temp->val < x)
            {
                small->next = new ListNode(temp->val);
                small = small->next;
            }
            else
            {
                large->next = new ListNode(temp->val);
                large = large->next;
            }
            temp = temp->next;
        }
        small->next = large_head->next;
        return small_head->next;
    }
};