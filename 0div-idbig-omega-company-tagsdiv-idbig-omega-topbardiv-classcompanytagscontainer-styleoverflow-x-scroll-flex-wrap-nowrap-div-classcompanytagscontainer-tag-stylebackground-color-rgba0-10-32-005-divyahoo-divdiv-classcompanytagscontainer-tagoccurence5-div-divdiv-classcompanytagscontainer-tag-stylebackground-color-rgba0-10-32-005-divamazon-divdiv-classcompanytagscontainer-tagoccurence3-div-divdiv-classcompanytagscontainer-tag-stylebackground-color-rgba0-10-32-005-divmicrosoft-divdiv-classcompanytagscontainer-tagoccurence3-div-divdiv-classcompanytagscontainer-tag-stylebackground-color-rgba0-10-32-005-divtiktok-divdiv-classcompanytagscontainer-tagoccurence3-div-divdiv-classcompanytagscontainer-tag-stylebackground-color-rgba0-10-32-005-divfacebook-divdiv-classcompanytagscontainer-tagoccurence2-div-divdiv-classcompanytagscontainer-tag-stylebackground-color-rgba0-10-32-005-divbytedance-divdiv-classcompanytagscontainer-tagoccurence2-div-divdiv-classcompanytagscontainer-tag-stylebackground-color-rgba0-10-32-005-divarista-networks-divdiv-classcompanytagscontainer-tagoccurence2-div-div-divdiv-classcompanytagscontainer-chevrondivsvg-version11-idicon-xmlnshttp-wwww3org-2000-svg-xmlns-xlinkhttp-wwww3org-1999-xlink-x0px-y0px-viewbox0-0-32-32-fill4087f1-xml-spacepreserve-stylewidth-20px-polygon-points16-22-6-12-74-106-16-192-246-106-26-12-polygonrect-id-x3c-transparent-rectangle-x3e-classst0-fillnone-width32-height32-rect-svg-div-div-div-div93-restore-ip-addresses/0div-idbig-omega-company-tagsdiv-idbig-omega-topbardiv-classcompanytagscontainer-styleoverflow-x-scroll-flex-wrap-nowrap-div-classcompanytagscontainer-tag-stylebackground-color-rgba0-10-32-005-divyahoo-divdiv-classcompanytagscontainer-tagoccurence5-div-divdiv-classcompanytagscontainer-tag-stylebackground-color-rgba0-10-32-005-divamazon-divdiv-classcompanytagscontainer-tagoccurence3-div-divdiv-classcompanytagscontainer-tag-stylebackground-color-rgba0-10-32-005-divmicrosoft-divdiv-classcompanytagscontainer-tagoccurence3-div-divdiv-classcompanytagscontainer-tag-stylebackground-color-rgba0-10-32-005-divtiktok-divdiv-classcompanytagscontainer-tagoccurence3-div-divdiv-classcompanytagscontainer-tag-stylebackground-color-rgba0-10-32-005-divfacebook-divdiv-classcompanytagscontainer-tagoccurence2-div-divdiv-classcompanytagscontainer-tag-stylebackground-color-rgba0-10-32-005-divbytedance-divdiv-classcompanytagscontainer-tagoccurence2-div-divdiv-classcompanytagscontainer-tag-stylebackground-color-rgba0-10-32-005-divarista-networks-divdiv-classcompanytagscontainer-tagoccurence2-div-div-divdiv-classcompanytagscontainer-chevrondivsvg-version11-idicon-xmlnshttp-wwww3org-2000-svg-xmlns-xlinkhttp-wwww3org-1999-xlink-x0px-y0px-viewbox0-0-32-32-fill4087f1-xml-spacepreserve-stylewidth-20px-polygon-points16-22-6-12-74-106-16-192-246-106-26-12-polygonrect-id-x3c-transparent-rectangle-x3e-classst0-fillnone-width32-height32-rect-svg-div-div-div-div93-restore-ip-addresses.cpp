class Solution {
public:
    
    void solve(int idx, int dot, string temp, string s, vector<string>&ans)
    {
        if(dot > 4)
        {
            return;
        }
        if(idx == s.size())
        {
            if(dot == 4)
            {
                temp.pop_back();
                ans.push_back(temp);
                return;
            }
        }
        for(int j=idx;j<s.size();j++)
        {
           string curr = s.substr(idx,j-idx+1);
            if(curr.size() > 1 && curr[0] == '0' || stoi(curr) > 255)
            {
                break;
            }
            solve(j+1,dot+1,temp+curr+'.',s,ans);
            
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
     
        vector<string>ans;
        solve(0,0,"",s,ans);
        return ans;
    }
};