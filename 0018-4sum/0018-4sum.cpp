class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int i,j,k,l;
        int n = nums.size();
        vector<int>v;
        set<vector<int>>st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
             long long new_target = (long long)target - nums[i] - nums[j];
                k = j+1;
                l = n-1;
                while(k < l)
                {
                long long sum =  (long long)nums[k] + nums[l];
                    if(sum == new_target)
                    {
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        v.push_back(nums[l]);
                        st.insert(v);
                        v.clear();
                        k++;
                        l--;
                    }
                    else if(sum > new_target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
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