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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL)
        {
            return NULL;
        }
        int count = 1;
        ListNode* temp = head;
        while(temp->next)
        {
            count++;
            temp = temp->next;
        }
        temp->next = head;
        if(count <= k)
        {
            k = k % count;
        }
        int len = count -k-1;
        ListNode* temp2 = head;
        while(len > 0)
        {
            temp2 = temp2->next;
            len--;
        }
        head = temp2->next;
        temp2->next = NULL;
        return head;
        
    }
};