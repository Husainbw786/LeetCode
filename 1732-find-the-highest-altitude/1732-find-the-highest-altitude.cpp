class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        int i;
        int altitude = 0;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,altitude);
            altitude += gain[i];
            
        }
        maxi = max(maxi,altitude);
        return maxi;
    }
};