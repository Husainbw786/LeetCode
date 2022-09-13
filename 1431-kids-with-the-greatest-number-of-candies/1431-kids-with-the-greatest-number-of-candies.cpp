class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
             vector<bool>v;
        int i;
        int max = candies[0];
        int n = candies.size();
        for(i=0;i<n;i++)
        {
            if(max < candies[i])
            {
                max = candies[i];
            }
        }
        for(i=0;i<n;i++)
        {
            candies[i] += extraCandies;
            if(candies[i] >= max)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
        }
        return v;
    }
};