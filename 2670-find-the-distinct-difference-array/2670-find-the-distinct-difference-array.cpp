class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        
        
      int n = nums.size();
      int i;
      unordered_set<int>st;
      vector<int>prefix;
      vector<int>sufix,v;
        for(i=0;i<n;i++)
        {
            st.insert(nums[i]);
            prefix.push_back(st.size());    
        }
        st.clear();
        for(i=n-1;i>=0;i--)
        {
            sufix.push_back(st.size());
            st.insert(nums[i]);
        }
        reverse(sufix.begin(),sufix.end());
        for(i=0;i<n;i++)
        {
            v.push_back(prefix[i] - sufix[i]);
        }
        return v;
          
           
           
           
           
           
    }
};