class Solution {
public:
    vector<string> printVertically(string s) {
        
        vector<string>v;
        vector<string>ans;
        int i;
        s += ' ';
        int n = s.size();
        string temp = "";
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
                v.push_back(temp);
                cout << temp << " ";
                int p= temp.size();
                maxi=max(maxi,p);
                temp = "";
            }
            else
            {
               temp += s[i];
                
            }
        }
        for(i=0;i<maxi;i++)
        {
            for(auto x : v)
            {
                if(i >= x.size())
                {
                    temp += ' ';
                }
                else
                {
                    temp += x[i];
                }   
            }
            int size = temp.size() - 1;
            while(temp[size] == ' ')
            {
                temp.pop_back();
                size--;
            }
            ans.push_back(temp);
            temp = "";
        }
        return ans;
    }
};