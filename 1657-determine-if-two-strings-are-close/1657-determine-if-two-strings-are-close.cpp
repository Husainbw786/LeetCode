class Solution {
public:
    bool closeStrings(string word1, string word2) {
      

    vector<int>v1,v2;
    int n = word1.size();
    int m = word2.size();    
    unordered_map<int,int>mp1,mp2;
    int i;
    if(n != m)
    {
        return false;
    }
   
    for(i=0;i<n;i++)
    {
        mp1[word1[i]]++;
        mp2[word2[i]]++;
    }
    
    for(auto x : mp1)
    {
        v1.push_back(x.second);
        if(mp2.find(x.first) == mp2.end())
        {
            return false;
        }
    }
    for(auto x : mp2)
    {
        v2.push_back(x.second);
        if(mp1.find(x.first) == mp1.end())
        {
            return false;
        }
    }
    if(v1.size() != v2.size())
    {
        return false;
    }
    n = v1.size();
        
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(i=0;i<n;i++)
    {
       if(v1[i] != v2[i])
       {
           return false;
       }
    }
    
    return true;    
    }
};