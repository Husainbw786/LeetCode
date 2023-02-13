class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n = tokens.size();
        int i=0;
        int j = n-1;
        int maxi = 0;
        int count = 0;
        sort(tokens.begin(),tokens.end());
        while(i<=j)
        {
            if(tokens[i] <= power)
            {
                count++;
                power = power - tokens[i];
                maxi = max(count,maxi);
                i++;
            }
            else
            {
                if(count > 0)
                {
                    count--;
                }
                else
                {
                    break;
                }
                
                power += tokens[j];
                j--;
            }
                
        }
            return maxi;
        
        
    }
};