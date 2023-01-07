class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        pair<int,pair<int,int>>p;
        int i;
        int count = 0;
        int n = capacity.size();
        for(i=0;i<n;i++)
        {
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(),capacity.end());
        for(i=0;i<n;i++)
        {
            if(capacity[i] <= additionalRocks)
            {
                count++;
                additionalRocks -= capacity[i];
            }
            else
            {
                break;
            }
        }
        return count;
    }
};