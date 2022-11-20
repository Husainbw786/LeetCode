class Solution {
public:
    string mostCommonWord(string para, vector<string>& ban) {
        
        vector<string>v;
        unordered_map<string,int>mp1,mp2;
        int i;
        int n = para.size();
        string temp = "";
        for(i=0;i<n;i++)
        {
            //cout << para[i] << " ";
            if(para[i] >= 'A' && para[i] <= 'Z')
            {
                para[i] = para[i] + 32;
            }
            if(para[i] >= 'a' && para[i] <= 'z')
            {
                temp += para[i];
              //  cout << temp << " ";
            }
            else
            {
                v.push_back(temp);
               // cout << temp << " ";
                temp = "";
            }
        }
        if(temp.size() != 0)
        {
            v.push_back(temp);
        }
        for(i=0;i<ban.size();i++)
        {
            mp2[ban[i]]++;
        }
        for(i=0;i<v.size();i++)
        {
            if(mp2.find(v[i]) == mp2.end())
            {
                if(v[i].size() != 0)
                {
                   mp1[v[i]]++;  
                }
            }
        }
        int max = 0;
        string ans = "";
        for(auto x : mp1)
        {
            if(x.second > max)
            {
                max = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};