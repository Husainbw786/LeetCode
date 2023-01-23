class Solution {
public:
    
    
    string ans = "";
    void solve(int n, set<string>&st,string temp)
    {
        if(temp.size() == n)
        {
            if(st.find(temp) == st.end() && ans == "")
            {
                ans = temp;
            }
            return;
        }
        solve(n,st,temp + '0');
        solve(n,st,temp + '1');
        return;
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
     
        int n = nums[0].size();
        set<string>st;
        for(auto x : nums)
        {
            st.insert(x);
        }
        string temp = "";
        solve(n,st,temp);
        return ans;
        
    }
};