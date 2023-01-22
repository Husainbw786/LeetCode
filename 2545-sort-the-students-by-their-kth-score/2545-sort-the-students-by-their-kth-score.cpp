class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
       int n = score.size();
       int m = score[0].size();
       int i,j;
       vector<pair<int,vector<int>>>v;
        int x = 0;
       for(i=0;i<n;i++)
       {
           x = 0;
           vector<int>temp;
           for(j=0;j<m;j++)
           {
              temp.push_back(score[i][j]);
              if(j == k)
              {
                  x = score[i][j];
              }
           }
          v.push_back({x,temp});
       }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            vector<int>y = v[i].second;
            for(j=0;j<m;j++)
            {
                score[i][j] = y[j];
            }
        }
        return score;
    }
};