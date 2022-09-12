class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     set<int>st;
        int i;
        vector<int>v;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        i = 0;
        for(auto x : st)
        {
            nums[i] = x;
            i++;
        }
     
        
      return st.size();  
    }
};