class Solution {
public:
    
    string temp = "";
    void solve(int open,int close,int n,vector<string>&ans)
    {
        if(temp.size() == 2*n)
        {
            ans.push_back(temp);
            return;
            
        }
        if(open < n)
        {
            temp += '(';      
            solve(open+1,close,n,ans);
            temp.pop_back();
        }
        if(close < open)
        {
            temp += ')';
            solve(open,close+1,n,ans);
            temp.pop_back();
            
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        solve(0,0,n,ans);
        return ans;
    }
};