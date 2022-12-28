class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int i;
        int time = 0;
        while(true)
        {
            bool flag = false;
        
            for(i=0;i<n;i++)
            {
                
                if(tickets[i] > 0)
                {
                    tickets[i]--;
                    time += 1; 
                }
                if(i == k)
                {
                    if(tickets[i] == 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                break;
            }
        }
        return time;
    }
};