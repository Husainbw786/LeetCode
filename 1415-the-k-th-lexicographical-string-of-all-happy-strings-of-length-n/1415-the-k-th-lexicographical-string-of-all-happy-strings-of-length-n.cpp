class Solution {
public:
    
    vector<string>v;
    void solve(int idx,int n,string s,string& temp,int k)
    {
        if(idx == n)
        {
            v.push_back(temp);
            return;
        }
        for(int i=0;i<3;i++)
        {
            if(temp.back() != s[i] && v.size() < k)
            {
                temp += s[i];
                solve(idx+1,n,s,temp,k);
                temp.pop_back();
            }
        }
    }
    
    string getHappyString(int n, int k) {
      
       string s = "abc";
       string temp = "";
       solve(0,n,s,temp,k);
       if(k > v.size())
       {
           return "";
       }
        
        return v[k-1];
    } 
};