class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int i;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(colors[i] == colors[j])
                {
                    continue;
                }
                else
                {
                    int diff = j - i;
                    maxi = max(diff,maxi);
                }
            }
        }
        return maxi;
    }
};