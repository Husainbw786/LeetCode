class Solution {
public:
    int distMoney(int money, int children) {
        
 
        
        vector<int>v(children,0);
        int i;
        for(i=0;i<children;i++)
        {
            if(money < 1)
            {
                return -1;
            }
            v[i] = 1;
            money--;
        }
        int x = 0;
        int ans = 0;
        for(i=0;i<children;i++)
        {
            if(money > 7)
            {
                v[i] += 7;
                money = money-7;
            }
            else
            {
               v[i] += money;
                money = 0;
                x = i;
                break;
            }
        }
        if(money != 0)
        {
            v[children-1] += money;
        }
        for(i=0;i<children;i++)
        {
            if(v[i] == 8)
            {
                ans++;
            }
            else
            {
                if(v[i] == 4 && i+1<children)
                {
                    v[i+1] +=1;
                }
                else if(v[i] == 4 && i == children-1)
                {
                    ans--;
                }
            }
        }
        
        return ans;
        
        
    }
};
