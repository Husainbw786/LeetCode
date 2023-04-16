class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     
        vector<int>v;
        int n = mat.size();
        int m = mat[0].size();
        int i,j;
        int index = 0;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            int count = 0;
            j = 0;
            int k = m-1;
            while(j <= k)
            {
                if(j == k && mat[i][j] == 1)
                {
                    count++;
                    break;
                }
                if(mat[i][j] == 1)
                {
                    count++;
                }
                if(mat[i][k] == 1)
                {
                    count++;
                }
                j++;
                k--;
            }
            if(count > maxi)
            {
                maxi = count;
                index = i;
            }
        }
        v.push_back(index);
        v.push_back(maxi);
        return v;
    }
};