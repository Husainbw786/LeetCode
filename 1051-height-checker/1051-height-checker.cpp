class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int>v = heights;
        sort(v.begin(),v.end());
        int count = 0;
        int n = v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i] != heights[i])
            {
                count++;
            }
        }
        return count;
    }
};