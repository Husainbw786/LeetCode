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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        ListNode* temp = new ListNode(0);
        ListNode* temp_head = temp;
        while(head)
        {
            if(mp.find(head->val) != mp.end())
            {
                head = head->next;
            }
            else
            {
                temp->next = new ListNode(head->val);
                temp = temp->next;
                head = head->next;
            }
        }
        return temp_head->next;
    }
};