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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
       
        ListNode* temp = head;
        while(temp)
        {
            ListNode* end = temp;
            int sum = 0;
            while(end->val != 0)
            {
                 sum += end->val;
                end = end->next;
            }
            temp->val = sum;
            temp->next = end->next;
            temp = temp->next;
        }
        return head;
    }
};