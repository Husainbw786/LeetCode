class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        int i = 0,j = 0;
        int n = firstList.size();
        int m = secondList.size();
        vector<vector<int>>ans;
        
        while(i < n && j < m)
        {
            int first_low = firstList[i][0];
            int first_high = firstList[i][1];
            int second_low = secondList[j][0];
            int second_high = secondList[j][1];
            int low = max(first_low,second_low);
            int high = min(first_high,second_high);
            
            if(low <= high)
            {
                ans.push_back({low,high});
            }
            if(first_high < second_high)
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};
