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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        ListNode* head = list1;;
        ListNode* headClone;
        
        if(list1 == NULL)
        {
            return list2;
        }
        else if(list2 == NULL)
        {
            return list1;
        }
        if(list1->val > list2->val)
        {
            head = list2;
            list2 = list2->next;
        }
        else
        {
            list1 = list1->next;
        }
        headClone = head;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val > list2->val)
            {
                headClone->next = list2;
                list2 = list2->next;
            }
            else
            {
                 headClone->next = list1;
                 list1 = list1->next;
            }
            headClone  = headClone->next;
        }
        if(list1 == NULL)
        {
            headClone->next = list2;
        }
        else
        {
          headClone->next = list1;   
        }
        
        return head;

       
    }
};


