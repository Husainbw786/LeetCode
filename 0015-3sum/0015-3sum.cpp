class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>st;
        vector<vector<int>>v;
        int n = nums.size();
        vector<int>temp;
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
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    st.insert({nums[i],nums[j],nums[k]});
                    temp.clear();
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