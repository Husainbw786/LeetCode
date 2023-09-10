class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        int n = nums.size();
        int i;
        set<int>st;
        
        for(i=0;i<n;i++)
        {
            int start = nums[i][0];
            int end = nums[i][1];
            for(int j=start;j<=end;j++)
            {
                st.insert(j);
            }
        }
        return st.size();
        
    }
};