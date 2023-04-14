class Solution {
public:
    int candy(vector<int>& rating) {
     
        int n = rating.size();
        int i;
        vector<int>left(n,1);
        vector<int>right(n,1);
        for(i=0;i<n-1;i++)
        {
            if(rating[i] < rating[i+1])
            {
                left[i+1] = left[i] + 1;
            }
        }
        for(i=n-1;i>0;i--)
        {
            if(rating[i] < rating[i-1])
            {
                right[i-1] = right[i] + 1;
            }
        }
        vector<int>ans(n,0);
        int sum = 0;
        for(i=0;i<n;i++)
        {
            ans[i] = max(left[i],right[i]);
            sum += ans[i];
        }
        return sum;
    }
};