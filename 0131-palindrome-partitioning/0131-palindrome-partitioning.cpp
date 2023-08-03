class Solution {
public:
    
    bool is_palindrome(string s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    void solve(int idx,string s, vector<string>&temp, vector<vector<string>>&ans)
    {
        if(idx == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<s.size();i++)
        {
           if(is_palindrome(s,idx,i))
           {
              temp.push_back(s.substr(idx,i-idx+1));
              solve(i+1,s,temp,ans);
              temp.pop_back();   
           }
            
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        
        int n = s.size();
        int i;
        vector<vector<string>>ans;
        vector<string>temp;
        solve(0,s,temp,ans);
        return ans;
    }
};