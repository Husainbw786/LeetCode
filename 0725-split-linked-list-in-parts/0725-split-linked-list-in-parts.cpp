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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode* temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        int per_part = count / k;
        int extra = count % k;
        
        vector<ListNode*>ans;
        temp = head;
        
        while(temp)
        {
            ans.push_back(temp);
            int curr_len = 1;
            while(curr_len < per_part)
            {
                temp = temp->next;
                curr_len++;
            }
            if(extra != 0 && count > k)
            {
                temp = temp->next;
                extra--;
            }
            ListNode* x = temp->next;
            temp->next = NULL;
            temp = x;
            
        }
         while(count < k)
        {
            ans.push_back(NULL);
            count++;
        }
        return ans;
    }
};