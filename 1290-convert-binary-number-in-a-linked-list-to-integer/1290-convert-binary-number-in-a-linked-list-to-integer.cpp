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
    ListNode*  reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
          head = prev;
        return head;
    }
    
    
    int getDecimalValue(ListNode* head) {
     
        ListNode* temp = reverse(head);
        int i = 0;
        int sum = 0;
        while(temp)
        {
            int x = temp->val;
            sum += pow(2,i)*x;
            temp = temp->next;
            i++;
        }
        return sum;
    }
};