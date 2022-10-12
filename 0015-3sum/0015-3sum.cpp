class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>st;
        vector<vector<int>>v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i,j,k;
        for(i=0;i< n-2;i++)
        {
            j = i+1;
            k = n-1;
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if( sum == 0)
                {
                    st.insert({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        for(auto x : st)
        {
            v.push_back(x);
        }
        return v;
    }
};