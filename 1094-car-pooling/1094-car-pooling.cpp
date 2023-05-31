class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n = trips.size();
        int i;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,trips[i][2]);
        }
        
        vector<int>v(maxi+1,0);
        
        for(i=0;i<n;i++)
        {
            int start = trips[i][1];
            int end = trips[i][2];
            for(int j=start;j<end;j++)
            {
                v[j] += trips[i][0];
                if(v[j] > capacity)
                {
                    return false;
                }
            }
        }
        
    return true;
        
        
    }
};