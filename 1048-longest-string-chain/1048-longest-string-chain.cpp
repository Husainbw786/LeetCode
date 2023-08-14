class Solution {
public:
    
    static bool comp(string a, string b)
    {
        return a.size() < b.size();
    }
    
    bool check(string a, string b)
    {
        if(a.size() != b.size()+1)
        {
            return false;
        }
        int i = 0,j=0;
        while(i < a.size())
        {
            if(a[i] == b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i == a.size() && j == b.size())
        {
            return true;
        }
        return false;
    }
    
    int longestStrChain(vector<string>& words) {
        
        int n = words.size();
        int maxi = 1;
        int i,j;
        vector<int>dp(n,1);
        sort(words.begin(),words.end(),comp);
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(check(words[i],words[j]))
                {
                    if(dp[i] < 1 + dp[j])
                    {
                      dp[i] = 1 + dp[j];  
                    }
                    
                }
            }
            if(maxi < dp[i])
            {
                maxi = dp[i];
            }
        }
        for(int i=0;i<n;i++) 
        {
            if(dp[i]>maxi)
            {
                maxi=dp[i];
                //mxind=i;
            }
        }
        return maxi;
    }
};