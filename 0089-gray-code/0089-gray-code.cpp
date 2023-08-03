class Solution {
public:
    
    vector<string>solve(int n)
    {
        if(n == 1)
        {
            return {"0","1"};
        }
        vector<string>temp = solve(n-1);
        vector<string>ans;
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back("0" + temp[i]);
        }
        for(int i = temp.size()-1;i>=0;i--)
        {
            ans.push_back("1" + temp[i]);
        }
        return ans;
    }
    
    vector<int> grayCode(int n) {
        
        vector<string>gray = solve(n);
        vector<int>ans;
        for(auto x : gray)
        {
            ans.push_back(stoi(x,0,2));
        }
        return ans;
    }
};