/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* p1 = headA;
        ListNode* p2 = headB;
       int n = 0;
        int m = 0;
        while(p1 != NULL)
        {
            n++;
            p1 =  p1->next;
        }
        while(p2 != NULL)
        {
            m++;
            p2 =  p2->next;
        }
        p1 = headA;
        p2 = headB;
        int diff = abs(n-m);
        if(n > m)
        {
            while(diff--)
            {
                p1 = p1->next;
            }
        }
        else
        {
            while(diff--)
            {
                p2 = p2->next;
            }
        }
        while(p1 != NULL && p2 != NULL)
        {
            if(p1 == p2)
            {
                return p1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return 0;
    }
};