class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        int n = ranges.size();
        vector<bool>v(50,false);
        bool left_check = false;
        bool right_check = false;
        for(int i=0;i<n;i++)
        {
            int x = ranges[i][0];
            int y = ranges[i][1];
            for(int j=x;j<=y;j++)
            {
                v[j] = true;
            }
        }
        for(int i=left;i<=right;i++)
        {
            if(v[i] == false)
            {
                return false;
            }
        }
        return true;
    }
};