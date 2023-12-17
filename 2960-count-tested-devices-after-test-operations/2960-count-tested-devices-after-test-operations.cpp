class Solution {
public:
    int countTestedDevices(vector<int>& battery) {
     
        
        int i,j;
        int n = battery.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(battery[i] > 0)
            {
                count++;
                for(j=i+1;j<n;j++)
                {
                    if(battery[j] - 1 >= 0)
                    {
                        battery[j] -= 1;
                    }
                }
            }
        }
        return count;
            
    }
};