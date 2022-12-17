class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        
        int n = words.size();
        int i;
         set<pair<string,string>>st;
        for(i=0;i<n;i++)
        {
            pair<string,string>p;
            string temp = words[i];
            for(int j=0;j<temp.size();j++)
            {
                if(j % 2 == 0)
                {
                    p.first += temp[j]; 
                }
                else
                {
                    p.second += temp[j];
                }
            }
            sort(p.first.begin(),p.first.end());
            sort(p.second.begin(),p.second.end());
            st.insert(p);
        }
        return st.size();
    }
};