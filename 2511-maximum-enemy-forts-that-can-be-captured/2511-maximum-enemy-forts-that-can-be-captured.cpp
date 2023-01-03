class Solution {
public:
    int captureForts(vector<int>& forts) {
        int i;
        int n = forts.size();
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            int count = 0;
            if(forts[i] == 1)
            {    
                for(int j=i+1;j<n;j++)
                {
                    if(forts[j] == 0)
                    {
                        count++;
                    }
                    else if(forts[j] == -1)
                    {
                        maxi = max(count,maxi);
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            count = 0;
            if(forts[i] == -1)
            {    
                for(int j=i+1;j<n;j++)
                {
                    if(forts[j] == 0)
                    {
                        count++;
                    }
                    else if(forts[j] == 1)
                    {
                        maxi = max(count,maxi);
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        
        return maxi;
    }
};