class Solution {
public:
    int hIndex(vector<int>& citations) {
            
       
        sort(citations.begin(),citations.end());
        int i;
        int maxi = 0;
        int n = citations.size();
        int j = 0;
        for(i=0;i<n;i++)
        {
            int x = citations[i];
            if(x <= n-i)
            {
                maxi = max(maxi,x);
            }
            else
            {
                if(maxi < n-i)
                {
                    maxi = n-i;
                }
                break;
            }
        }
        return maxi--;
    }
};