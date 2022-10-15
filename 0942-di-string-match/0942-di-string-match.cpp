class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0;
        int n = s.size();
        int high = s.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'I')
            {
                v.push_back(low);
                low++;
            }
            else if(s[i] == 'D')
            {
                v.push_back(high);
                high--;
            }
        }
        v.push_back(low);
        return v;
    }
};