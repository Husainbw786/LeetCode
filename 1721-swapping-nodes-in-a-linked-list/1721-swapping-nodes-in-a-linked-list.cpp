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
    ListNode* swapNodes(ListNode* head, int k) {
     
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        ListNode* temp;
        k--;
        while(k--)
        {
            ptr1 = ptr1->next;
        }
        temp = ptr1;
        ptr1 = ptr1->next;
        while(ptr1 != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 =  ptr2->next;
        }
        swap(ptr2->val,temp->val);
        return head;
    }
};