class Solution {
public:
    
    bool isvowel(char x)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
     
        int n = queries.size();
        int i = 0;
        vector<int>pref(words.size()+1);
        vector<int>ans;
        for(auto x : words)
        {
            pref[i+1] = pref[i] + (isvowel(x[0]) && isvowel(x[x.size()-1]));
            i++;
        }
        for(i=0;i<n;i++)
        {
            ans.push_back(pref[queries[i][1] + 1] - pref[queries[i][0]]);
        }
        return ans;
       
    }
};