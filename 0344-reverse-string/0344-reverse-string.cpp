class Solution {
public:
    
    void solve(int low,int high,vector<char>& s)
    {
        if(low >= high)
        {
            return;
        }
        swap(s[low],s[high]);
        solve(low+1,high-1,s);
    }
    
    void reverseString(vector<char>& s) {
         
        int low = 0;
        int high = s.size()-1;
        solve(low,high,s);
        
    }
};