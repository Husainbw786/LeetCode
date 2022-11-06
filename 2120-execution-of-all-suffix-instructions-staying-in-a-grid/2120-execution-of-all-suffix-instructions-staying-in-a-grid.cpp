class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        int len = s.size();
        int i,j;
       
       
        vector<int>ans(len,0);
        for(i=0;i<len;i++)
        {
             int xIndex = startPos[0];
             int yIndex = startPos[1];
             int count = 0;
            for(j=i;j<len;j++)
            {
                if(s[j] == 'U')
                {
                    xIndex--;
                }
                if(s[j] == 'D')
                {
                    xIndex++;
                }
                if(s[j] == 'R')
                {
                    yIndex++;
                }
                if(s[j] == 'L')
                {
                    yIndex--;
                }
                if(xIndex < 0 || yIndex < 0 || xIndex >= n || yIndex >= n)
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
           ans[i] = count; 
        }
        return ans;
    }
};