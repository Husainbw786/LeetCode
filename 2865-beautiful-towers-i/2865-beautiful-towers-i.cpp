class Solution {
public:
    
    long long int solve(vector<int>v, long long int sum, int i)
    {
        sum += v[i];
        int x = i-1;
        int mini = v[i];
        while(x >= 0)
        {
            mini = min(v[x],mini);
            sum += mini;
            x--;
        }
        x = i+1;
        mini = v[i];
        while(x < v.size())
        {
            mini = min(mini,v[x]);
            sum += mini;
            x++;
        }
        return sum;
    }
    
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        
        int n = maxHeights.size();
        int i;
        long long int maxi = 0;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,solve(maxHeights,0,i));
        }
        return maxi;
        
    }
};