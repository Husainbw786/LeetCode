class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int five = 0;
        int ten = 0;
        int twenty = 0;
        int i;
        int n = bills.size();
        for(i=0;i<n;i++)
        {
            if(bills[i] == 5)
            {
                five++;
                continue;
            }
            else if(bills[i] == 10)
            {
                ten++;
                if(five > 0)
                {
                   five--; 
                }
                else
                {
                    return false;
                }
            }
            else
            {
                twenty++;
                if(ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if(five > 2)
                {
                    five = five - 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};