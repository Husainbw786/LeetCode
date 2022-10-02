class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        set<pair<int,int>>st;
        int i,j;
        int n = mat.size();
        int m = mat[0].size();
        for(i=0;i<n;i++)
        {
            int count = 0;
           for(j=0;j<m;j++)
           {
               if(mat[i][j] == 1)
               {
                   count++;
               }
               else
               {
                   break;
               }
           }
        st.insert({count,i});
        }
        vector<int>ans;
        for(auto i : st)
        {
            if(k == 0)
            {
                break;
            }
           ans.push_back(i.second);  
            k--;
        }
        return ans;
    }
};