class Solution {
public:
    int pivotInteger(int n) {
        
        vector<int>v1;
        vector<int>v2;
        int i;
        for(i=1;i<=n;i++)
        {
            v1.push_back(i);
            v2.push_back(i);
        }
        vector<int>sum1,sum2;
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += v1[i];
            sum1.push_back(sum);
        }
        sum = 0;
        for(i=n-1;i>=0;i--)
        {
            sum += v2[i];
            sum2.push_back(sum);
        }
        reverse(sum2.begin(),sum2.end());
        for(i=0;i<n;i++)
        {
            if(sum1[i] == sum2[i])
            {
                return v1[i];
            }
        }
        return -1;
    }
};