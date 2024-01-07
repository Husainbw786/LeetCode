class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
      
        int n = dimensions.size();
        int i,j;
        float maxi = 0;
        int area = 0;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            int a = dimensions[i][0];
            int b = dimensions[i][1];
            
            float x = sqrt((a*a) + (b*b)); 
            if(x > maxi)
            {
                maxi = max(x,maxi);
                ans = i;
                area = dimensions[i][0] * dimensions[i][1];
            }
            else if(x == maxi)
            {
                if(area < dimensions[i][0] * dimensions[i][1])
                {
                    ans = i;
                    area = dimensions[i][0] * dimensions[i][1];
                }
            }
        }
        return area; 
    }
};