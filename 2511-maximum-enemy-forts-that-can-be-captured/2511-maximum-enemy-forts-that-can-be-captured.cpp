class Solution {
public:
    int captureForts(vector<int>& forts) {
        int i;
        int n = forts.size();
        vector<int>v;
        bool flag = false;
        for(i=0;i<n;i++)
        {
            if(forts[i] == 1)
            {
                v.push_back(i);
            }
            if(forts[i] == -1)
            {
                flag = true;
            }
        }
        if(!flag)
        {
            return 0;
        }
        int maxi = 0;
        for(i=0;i<v.size();i++)
        {
            int x = v[i] - 1;
            int y = v[i] + 1;
            int count = 0;
            while(x >= 0)
            {
                if(forts[x] == 0)
                {
                    count++;
                }
                else if(forts[x] == -1)
                {
                    maxi = max(count,maxi);
                    break;
                }
                else
                {
                    break;
                }
                x--;
            }
            count = 0;
            while(y < n)
            {
                if(forts[y] == 0)
                {
                    count++;
                }
                else if(forts[y] == -1)
                {
                    maxi = max(count,maxi);
                    break;
                }
                else
                {
                    break;
                }
                y++;
            }
            
        }
        return maxi;
    }
};