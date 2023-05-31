class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n = trips.size();
        vector<int>v(1001,0);
        int i;
        for(i=0;i<n;i++)
        {
            v[trips[i][1]] += trips[i][0];
            v[trips[i][2]] -= trips[i][0];
        }
        int count = 0; 
        for(i=0;i<1001;i++)
        {
            count += v[i];
            if(count > capacity)
            {
                return false;
            }
        }
        
        return true;
    }
};