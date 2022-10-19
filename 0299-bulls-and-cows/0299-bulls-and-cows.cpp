class Solution {
public:
    string getHint(string secret, string guess) {
        
        int bulls = 0;
        int cows = 0;
        unordered_map<int,int>mp;
        int n = secret.size();
        for(int i=0;i<n;i++)
        {
            int secretNumer = secret[i] - '0';
            int guessNumber = guess[i] - '0';
            if(secretNumer == guessNumber)
            {
                bulls++;
            }
            else
            {
                if(mp[secretNumer] < 0)
                {
                    cows++;
                }
                if(mp[guessNumber] > 0)
                {
                    cows++;
                }
                mp[secretNumer]++;
                mp[guessNumber]--;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};