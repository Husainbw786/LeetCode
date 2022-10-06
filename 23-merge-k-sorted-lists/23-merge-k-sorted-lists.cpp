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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
        int n = lists.size();
        if(n == 0)
        {
            return NULL;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        int i;
        for(i=0;i<n;i++)
        {
            ListNode* temp = lists[i];
            while(temp != NULL)
            {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        ListNode* start = NULL;
        ListNode* end = NULL;
        while(!pq.empty())
        {
            if(start == NULL)
            {
                start = new ListNode(pq.top());
                pq.pop();
                end = start;
            }
            else
            {
                end->next = new ListNode(pq.top());
                pq.pop();
                end = end->next;
            }
        }
        return start;
    }
};