class Solution {
public:
    string longestPalindrome(string S) {
        
         int n = S.size();
        int a = 0;
        int b = 0;
        int maxi = 0;
        bool dp[n][n];
        string ans = "";
        int j,i;
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(i == j)
                {
                    dp[i][j] = true;
                }
                else if(i > j)
                {
                    dp[i][j] = false;
                }
                else
                {
                    if(S[j] == S[i] && (j-i) != 1 && dp[i+1][j-1] == true)
                    {
                        dp[i][j] = true;
                        if(maxi < (j-i))
                        {
                            maxi = j-i;
                            a=i;
                            b=j;
                        }
                    }
                
                    else if( (j-i) == 1 && S[j] == S[i])
                    {
                        dp[i][j] = true;
                        if(maxi < (j-i))
                        {
                            maxi = j-i;
                            a=i;
                            b=j;
                        }
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                    
                }
            }
        }
        return S.substr(a,b-a+1);
        
    }
};