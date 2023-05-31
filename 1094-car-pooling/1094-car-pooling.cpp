class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n = trips.size();
        int maxi = 0;
         int i;
        for(int i=0;i<n;i++)
        {
            maxi = max(trips[i][2],maxi);
        }
        vector<int>v(maxi+1,0);
      
        for(i=0;i<n;i++)
        {
            v[trips[i][1]] += trips[i][0];
            v[trips[i][2]] -= trips[i][0];
        }
        int count = 0; 
        for(i=0;i<maxi+1;i++)
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