class Solution {
public:
    long long minimalKSum(vector<int>& nums, long long int k) {
     
        set<long long int>st;
        long long int sum = 0;
        
        long long int i;
        int n = nums.size();
        
        for(i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        
        for(long long int x : st)
        {
            if(x <= k)
            {
                k++;
                sum += x;
            }
            if(x > k)
            {
                break;
            }
        }
        long long int r = (k*(k+1))/2;
        sum = r - sum;
        return sum;
    }
};