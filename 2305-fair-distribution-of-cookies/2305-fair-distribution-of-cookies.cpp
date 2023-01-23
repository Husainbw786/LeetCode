class Solution {
public:

    int ans = INT_MAX;
    void solve(int i,int k,vector<int>cookies,vector<int>&temp)
    {
        if(i == cookies.size())
        {
            int maxi = INT_MIN;
            for(int j=0;j<temp.size();j++)
            {
                maxi = max(temp[j],maxi);
            }
            ans = min(ans,maxi);
            return;
        }
        for(int j=0;j<k;j++)
        {
            temp[j] += cookies[i];
            solve(i+1,k,cookies,temp);
            temp[j] -= cookies[i];
            if(temp[j] == 0)
            {
                return;
            }
        }
    }
    
    
    int distributeCookies(vector<int>& cookies, int k) {
     
        
        vector<int>temp(k,0);
        int n = cookies.size();
        solve(0,k,cookies,temp);
        return ans;
    }
};