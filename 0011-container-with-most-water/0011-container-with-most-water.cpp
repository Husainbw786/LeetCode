class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int maxi = 0;
        int x = n - 1;
        while(i < j)
        {
            int mini = min(heights[i],heights[j]);
            int capacity = mini * x;
            maxi = max(capacity,maxi);
            if(heights[i] > heights[j])
            {
                j--;
            }
            else
            {
                i++;
            }
            x--;
        }
        return maxi;
    }
};