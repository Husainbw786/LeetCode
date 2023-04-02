class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int i;
        int n = spells.size();
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(i=0;i<n;i++)
        {
            int count = 0;
            int m = potions.size();
            int low = 0;
            int high = m-1;
            int success_index = m;
            while(low <= high)
            {
                int mid = low + (high - low)/2;
                long long int curr = (long long)potions[mid] * spells[i];
                if(curr >= success)
                {
                    success_index = mid;
                    high = mid - 1;
                    
                }
                else
                {
                    low = mid + 1;
                }
            }
            ans.push_back(m - success_index);
        }
        return ans;
    }
};