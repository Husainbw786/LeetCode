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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>>v(m,vector<int>(n,-1));
        int top = 0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;
        bool flag = false;
        
        while(top <= bottom && left <= right && head)
        {
            for(int i=left;i<=right;i++)
            {
                v[top][i] = head->val;
                if(head)
                {
                   head = head->next;  
                   if(!head)
                   {
                     flag = true;
                     break;
                   }
                }
                
            }
            if(flag)
            {
                break;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                v[i][right] = head->val;
                if(head)
                {
                  head = head->next;  
                  if(!head)
                   {
                     flag = true;
                     break;
                   }
                }
                
            }
            if(flag)
            {
                break;
            }
            right--;
            for(int i=right;i >=left;i--)
            {
                v[bottom][i] = head->val;
                if(head)
                {
                  head = head->next;  
                   if(!head)
                   {
                     flag = true;
                     break;
                   }
                }
                
            }
            if(flag)
            {
                break;
            }
            bottom--;
            for(int i=bottom;i >= top;i--)
            {
                v[i][left] = head->val;
                if(head)
                {
                  head = head->next;  
                  if(!head)
                   {
                     flag = true;
                     break;
                   }
                } 
            }
            if(flag)
            {
                break;
            }
            left++;
        }
        return v;
    }
};