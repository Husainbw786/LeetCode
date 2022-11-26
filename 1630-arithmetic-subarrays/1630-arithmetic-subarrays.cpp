class Solution {
public:
    
    bool isValid(vector<int>temp)
    {
        sort(temp.begin(),temp.end());
        int x = temp[1] - temp[0];
        for(int j=2;j<temp.size();j++)
        {
            if(temp[j] - temp[j-1] != x)
            {
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        
        
        vector<bool>ans;
        int n = l.size();
        int i;
        for(i=0;i<n;i++)
        {
            vector<int>temp(nums.begin()+l[i],nums.begin()+r[i]+1);
            if(isValid(temp))
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};