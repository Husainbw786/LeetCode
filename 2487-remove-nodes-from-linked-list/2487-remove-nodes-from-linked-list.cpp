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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) {
        
        stack<ListNode*>st;
        
        ListNode* temp = head;
        while(temp)
        {
            if(st.empty())
            {
                st.push(temp);
            }
            else if(st.top()->val > temp->val)
            {
                st.push(temp);
            }
            else
            {
                while(!st.empty() && st.top()->val < temp->val )
                {
                    st.pop();
                }
                st.push(temp);
            }
            temp = temp->next;
        }
        ListNode* ans = new ListNode(-1);
        ListNode* head1 = ans;
        
        while(!st.empty())
        {
            ans->next = new ListNode(st.top()->val);
            st.pop();
            ans = ans->next;
        }
        
        return reverse(head1->next);
        
    }
};