class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int,int>mp1,mp2;
        int i;
        if(n == 1)
        {
            return 1;
        }
        int m = trust.size();
        for(i=0;i<m;i++)
        {
            int x = trust[i][0];
            mp1[x]++;
        }
        for(i=0;i<m;i++)
        {
            int x = trust[i][1];
            mp2[x]++;
        }
        for(i=0;i<=n;i++)
        {
          if(mp1[i] == 0 && mp2[i] == n-1)
          {
              return i;
          }
        }
        return -1;
    }
};