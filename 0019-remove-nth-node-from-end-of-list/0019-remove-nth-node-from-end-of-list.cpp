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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
        ListNode* temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
       if(count == n)
       {
           return head->next;
       }
       count = count - n;
       int pointer = 0;
        while(temp != NULL && temp->next != NULL)
        {
            pointer++;
            if(pointer == count)
            {
                temp->next = temp->next->next;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};