class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     
          int n = boxTypes.size();
          int i;
          for(i=0;i<n;i++)
          {
              int x = boxTypes[i][0];
              boxTypes[i][0] = boxTypes[i][1];
              boxTypes[i][1] = x;
          }
        
        sort(boxTypes.begin(),boxTypes.end());
        reverse(boxTypes.begin(),boxTypes.end());
        int ans = 0;
        int box = 0;
        i = 0;
        while(box <= truckSize && i < n)
        {    
            if( (box + boxTypes[i][1]) > truckSize)
            {
                while((box + boxTypes[i][1]) > truckSize)
                {
                    boxTypes[i][1] = boxTypes[i][1] - 1;
                    if((box + boxTypes[i][1]) <= truckSize)
                    {
                        break;
                    }
                }
            }
            else
            {
               ans += boxTypes[i][0] * boxTypes[i][1];
               box += boxTypes[i][1]; 
               i++;
            }
        }
        return ans;
    }
};