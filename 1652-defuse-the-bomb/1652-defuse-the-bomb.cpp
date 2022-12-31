class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n = code.size();
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            int sum = 0;
            int x = i+1;
            int p = k;
            if(k > 0)
            {
                if(x == n)
                {
                    x = 0;
                }
                while(p--)
                {
                    sum += code[x];
                    x++;
                    if(x == n)
                    {
                     x = 0;   
                    }
                }
            }
            else if(k == 0)
            {
                sum = 0;
            }
            else
            {
                x = i-1;
                p *= -1;
                if(x == -1)
                {
                    x = n-1;
                }
                while(p--)
                {
                    sum += code[x];
                    x--;
                    if(x == -1)
                    {
                        x = n-1;
                    }
                }
            }
            v.push_back(sum);
        }
        return v;
    }
};