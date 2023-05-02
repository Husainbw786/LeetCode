class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
        bool flag = false;
        int i;
        int n = player1.size();
        int m = player2.size();
        int sum1 = 0, sum2 = 0;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(player1[i] == 10)
            {
                sum1 += player1[i];
                i++;
                count = 0;
                while(i < n && count < 2)
                {
                    sum1 += 2 * player1[i];
                    count++;
                    if(player1[i] == 10)
                    {
                        count = 0;
                    }
                    i++;
                }
                i--;
            }
            else
            {
                sum1 += player1[i];
            }
        }
        for(i=0;i<m;i++)
        {
            if(player2[i] == 10)
            {
                sum2 += player2[i];
                i++;
                count = 0;
                while(i < m && count < 2)
                {
                    sum2 += 2 * player2[i];
                    count++;
                    if(player2[i] == 10)
                    {
                        count = 0;
                    }
                    i++;
                }
                i--;
            }
            else
            {
                sum2 += player2[i];
            }
        }

        if(sum1 == sum2)
        {
            return 0;
        }
        if(sum1 > sum2)
        {
            return 1;
        }
        return 2;
    }
};