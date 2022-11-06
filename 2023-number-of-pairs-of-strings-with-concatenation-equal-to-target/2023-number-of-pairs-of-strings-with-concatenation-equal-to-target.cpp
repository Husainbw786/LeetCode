class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int i;
        int n = nums.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            string temp = "";
            for(int j=0;j<n;j++)
            {
                if(i != j)
                {
                    temp += nums[i];
                    temp += nums[j];
                    if(temp == target)
                    {
                        count++;
                    }
                }
                temp = "";
            }
        }
        return count;
    }
};