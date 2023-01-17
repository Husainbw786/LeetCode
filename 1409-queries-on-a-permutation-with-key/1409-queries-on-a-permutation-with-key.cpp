class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
     
        int n = queries.size();
        int i;
        vector<int>v;
        vector<int>ans;
        int j;
        for(i=0;i<m;i++)
        {
            v.push_back(i+1);
        }
        for(i=0;i<n;i++)
        {
            int x = queries[i];
            for(j=0;j<m;j++)
            {
                if(v[j] == x)
                {
                    ans.push_back(j);
                    break;
                }
            }
            while(j > 0)
            {
                swap(v[j],v[j-1]);
                j--;
            }
        }
        return ans;
    }
};