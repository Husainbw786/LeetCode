class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        int count = 0;
        for(i=1;i<n-1;i++)
        {
            int x = nums[i];
            int j = i+1;
            int k = i-1;
            bool flag1 = false;
            bool flag2 = false;
            while(j < n)
            {
                if(nums[j] > x)
                {
                    flag1 = true;
                    break;
                }
                j++;
            }
            while(k >= 0)
            {
                if(nums[k] < x)
                {
                    flag2 = true;
                    break;
                }
                k--;
            }
            if(flag1 && flag2)
            {
                count++;
            }
        }
        return count;
    }
};