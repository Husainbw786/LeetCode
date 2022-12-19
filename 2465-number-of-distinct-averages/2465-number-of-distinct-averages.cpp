class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        unordered_set<float>st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int x = n;
        while(i < j)
        {
            int a = nums[i];
            int b = nums[j];
            float ans  = (a+b) / 2.0;
            st.insert(ans);
            i++;
            j--;
        }
        return st.size();
    }
};