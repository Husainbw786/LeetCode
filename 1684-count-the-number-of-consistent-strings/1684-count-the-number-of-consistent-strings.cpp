class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<char,int>mp;
        int n = allowed.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[allowed[i]]++;
        }
        n = words.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            bool flag = true;
            for(int j=0;j<temp.size();j++)
            {
                if(mp.find(temp[j]) == mp.end())
                {
                    flag = false;
                }
            }
            if(flag)
            {
                count++;
            }
        }
        return count;
    }
};