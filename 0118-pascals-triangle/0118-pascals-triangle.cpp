class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        
        int i;
        vector<vector<int>>ans;
        int j;
        
        for(i=0;i<n;i++)
        {
            vector<int>temp(i+1,1);
            ans.push_back(temp);
        }
        
        for(i=2;i<n;i++)
        {
            vector<int>temp = ans[i-1];
            vector<int>curr = ans[i];
            for(j=1;j<curr.size()-1;j++)
            {
                 curr[j] = temp[j-1] + temp[j];
            }
            ans[i] = curr;
        }
        
        return ans;
    }
};