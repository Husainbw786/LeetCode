class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        int n = nums.size();
        int i;
        vector<int>v;
        vector<int>ans;
        set<int>st;
        for(i=0;i<n;i++)
        {
            if(nums[i] == key)
            {
                v.push_back(i);
            }
        }
       for(i=0;i<v.size();i++)
       {
           int x = v[i];
           for(int j=0;j<n;j++)
           {
               if(abs(x-j) <= k)
               {
                   st.insert(j);
               }
           }
       }
       for(auto x : st)
       {
           ans.push_back(x);
       }
       return ans; 
    }
};