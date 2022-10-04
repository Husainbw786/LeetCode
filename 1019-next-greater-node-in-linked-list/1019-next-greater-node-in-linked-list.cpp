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
    vector<int> nextLargerNodes(ListNode* head) {
        
        ListNode* temp = head;
        vector<int>v;
        while(temp->next != NULL)
        {
            ListNode* p = temp->next;
            while((temp->val >= p->val) && p->next != NULL )
            {
                p = p->next;
            }
            if(temp->val < p->val)
            {
                v.push_back(p->val);
            }
            else
            {
                v.push_back(0);
            }
            temp = temp->next;
        }
        v.push_back(0);
        return v;
    }
};