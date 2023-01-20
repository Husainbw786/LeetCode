class Solution {
public:
    bool flag = false;
    void solve(string s, int low ,int high)
    {
        if(low >= high)
        {
            flag = true;
            return;
        }
        if(s[low] != s[high])
        {
            return;
        }
        solve(s,low+1,high-1);
        
    }
    
    bool isPalindrome(int x) {
        int i;
        string str = to_string(x);
        int low = 0;
        int high = str.size()-1;
        solve(str,low,high);
        if(flag)
        {
            return true;
        }
        return false;
        
    }
};