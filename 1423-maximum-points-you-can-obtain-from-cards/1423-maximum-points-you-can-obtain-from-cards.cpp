class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int i = 0;
        int sum = 0;
        int maxi = 0;
        for(i=0;i<k;i++)
        {
            sum += cardPoints[i];
        }
        maxi = max(sum,maxi);
        int j = k-1;
        for(i=n-1;i>=n-k;i--)
        {
            sum -= cardPoints[j];
            j--;
            sum += cardPoints[i];
            maxi = max(maxi,sum);
        }
        return maxi;
        
    }
};