class Solution {
public:
    int minDeletions(string s) {
       
       
        
        int n = s.size();
        int i;
        unordered_map<char,int>mp1;
        unordered_map<int,char>mp2;
        
        for(i=0;i<n;i++)
        {
            mp1[s[i]]++;
        }
        int count = 0;
        for(auto x : mp1)
        {
            int check = x.second;
            if(mp2.find(check) == mp2.end())
            {
                mp2[check] = x.first;
            }
            else
            {
                
                while(mp2.find(check) != mp2.end())
                {
                    check--;
                    count++;
                    if(check == 0)
                    {
                        break;
                    }
                }
                mp2[check] = x.first;
            }
        }
    return count;
            
    }
};