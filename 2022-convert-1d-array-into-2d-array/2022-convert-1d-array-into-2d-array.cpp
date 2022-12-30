class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int len = original.size();
        int i = 0;
        vector<vector<int>>ans;
        if(len != m*n)
        {
            return ans;
        }
        int j = 0;
        int x = 0;
        while(j < m)
        {
            vector<int>temp;
            for(i=0;i<n;i++)
            {
                temp.push_back(original[x++]);
            }
            ans.push_back(temp);
            j++;
        }
        return ans;
    }
};