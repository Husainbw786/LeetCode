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
        
        int n = 0;
        int m = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1)
        {
            n++;
            temp1 = temp1->next;
        }
        while(temp2)
        {
            m++;
            temp2 = temp2->next;
        }
        bool flag = false;
        if(n > m)
        {
            flag = true;
            n = n - m;
            temp1 = headA;
            while(n>0)
            {
                temp1 = temp1->next;
                n--;
            }
        }
        else
        {
            m = m - n;
            temp2 = headB;
            while(m>0)
            {
                temp2 = temp2->next;
                m--;
            }
        }
        if(flag)
        {
            temp2 = headB;
        }
        else
        {
            temp1 = headA;
        }
        while(temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
        
        
        
    }
};