class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        vector<int>v;
        int n = queries.size();
        int i,j;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            int x = queries[i];
            int sum = 0;
            int count = 0;
            bool flag = false;
            for(int j=0;j<nums.size();j++)
            {
                sum += nums[j];
                count++;
                if(sum > x)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                v.push_back(count-1);
            }
            else
            {
             v.push_back(count);   
            }
            
        }
        return v;
    }
};