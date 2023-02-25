class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int forward = 0;
        int n = nums.size();
        int count1 = 0;
        int count2 = 0;
        int ans = INT_MAX;
        int i;
        for(i=0;i<n;i++)
        {
            if(mini > nums[i])
            {
                mini = nums[i];
                count1 = i+1;
            }
            if(maxi < nums[i])
            {
                maxi = nums[i];
                count2  = i+1;
            }
        }
        ans = max(count1,count2);
       
        count1 = 0;
        count2 = 0;
        bool flag1 = false;
        bool flag2 = false;
        for(i=n-1;i>=0;i--)
        {
            if(nums[i] == maxi)
            {
                count1 = n-i;
                flag1 = true;
            }
            if(nums[i] == mini)
            {
                count2 = n-i;
                flag2 = true;
            }
            if(flag1 && flag2)
            {
                break;
            }    
        }
        int x = max(count1,count2);
        ans = min(ans,x);
        i = 0;
        int j = n-1;
        count1 = 0;
        count2 = 0;
        flag1 = false;
        while(i <= j)
        {
            if(nums[i] == maxi)
            {
                count1 = i+1;
                flag1 = true;
            }
            if(nums[j] == maxi)
            {
                count1 = n-j;
                flag1 = true;
            }
            if(flag1)
            {
                break;
            }
            i++;
            j--;
        }
        flag1 = false;  
        i = 0;
        j = n-1;
        while(i <= j)
        {
            if(nums[i] == mini)
            {
                count2 = i+1;
                flag1 = true;
            }
            if(nums[j] == mini)
            {
                count2 = n-j;
                flag1 = true;
            }
            if(flag1)
            {
                break;
            }
            i++;
            j--;
        }
        ans = min(ans,count1+count2);
        return ans;        
    }
};