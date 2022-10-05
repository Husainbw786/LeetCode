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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     
        ListNode* temp = list1;
        int pos = 0;
        while(true)
        {
            while(pos < a-1)
            {
                temp = temp->next;
                pos++;
            }
            ListNode* first_connect = temp;
            while(pos <= b)
            {
                temp = temp->next;
                pos++;
            }
            first_connect->next = list2;
            while(list2->next)
            {
                list2 = list2->next;
            }
            list2->next = temp;
            break;
        }
        return list1;
    }
    
};