class Solution {
public:
    
    string temp = "";
    unordered_map<char,string>mp;

    void solve(int n,string digit ,vector<string>&v,int idx)
    {
        if(temp.size() == n && temp != "")
        {
            v.push_back(temp);
            return;
        }
        if(idx > n)
        {
            return;
        }
        for(int i=0;i<mp[digit[idx]].size();i++)
        {
            temp += mp[digit[idx]][i];
            solve(n,digit,v,idx+1);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
            
        int n = digits.size();
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string>v;
        if(digits.size() == 0)
        {
            return v;
        }
        solve(n,digits,v,0);
        return v;
    }
};