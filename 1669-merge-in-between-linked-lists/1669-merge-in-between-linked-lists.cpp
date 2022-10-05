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
    
    ListNode* getTail(ListNode* temp)
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp = list1;
        ListNode* A_Node;
        ListNode* B_Node;
        int indx = 0;
        while(temp)
        {
            if(indx == a-1)
            {
                A_Node = temp;
            }
            else if(indx == b+1)
            {
                B_Node = temp;
            }
            temp = temp->next;
            indx++;
        }
            
        A_Node->next = list2;
        getTail(list2)->next = B_Node;    
         
        return list1;
    }
};