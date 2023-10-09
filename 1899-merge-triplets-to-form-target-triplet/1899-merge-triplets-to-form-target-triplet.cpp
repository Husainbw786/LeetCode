class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        
        int n = triplets.size();
        int i,j;
        vector<int>ans;
        ans.push_back(INT_MIN);
        ans.push_back(INT_MIN);
        ans.push_back(INT_MIN);
        
        for(i=0;i<n;i++)
        {
            bool flag = false;
            vector<int>temp = ans;
            for(j=0;j<3;j++)
            {
                temp[j] = max(temp[j],triplets[i][j]);
                if(temp[j] > target[j])
                {
                    flag = true;
                    break;
                }
            }
            
            if(!flag)
            {
                ans = temp; 
            }
            if(ans == target)
            {
                return true;
            }
        }
        return false;
    }
};