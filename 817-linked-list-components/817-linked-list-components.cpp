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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int result = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            int count = 0;
                while(temp != NULL && st.find(temp->val) != st.end())
                {
                    temp = temp->next;
                    count++;
                }
            if(count > 0)
            {
                result++;
            }
            if(temp != NULL)
            {
              temp = temp->next;  
            }
        }
        return result;
            
    }
};