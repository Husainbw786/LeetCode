class Solution {
public:
    int bestClosingTime(string customers) {
        
        int n = customers.size();
        int i;
        int count_y = 0;
        int mini = 0;
        int ans = -1;
        for(i=0;i<n;i++)
        {
            if(customers[i] == 'Y')
            {
                count_y++;
            }
            else if(customers[i] == 'N')
            {
                count_y--;
            }
            if(count_y > mini)
            {
                mini = count_y;
                ans = i;
            }
        }
        return ans + 1;
        
    }
};