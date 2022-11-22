class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int n = strs.size();
        int i = 0;
        int m = strs[0].size();
        int j;
        int count = 0;
        while(i < m)
        {
            bool flag = false;
           for(j=0;j<n-1;j++)
            {
              if(strs[j][i] > strs[j+1][i])
              {
                  flag = true;
                  break;
              }
            } 
            if(flag)
            {
                count++;
            }
            i++;
        }
        return count;
       
    }
};