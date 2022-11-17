class Solution {
public:
    string replaceWords(vector<string>& dictionary, string s) {
        
        int n = s.size();
        int m = dictionary.size();
        int i;
        int mini = INT_MAX;
        vector<string>v;
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        vector<string>ans;
        for(i=0;i<v.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i].rfind(dictionary[j],0) == 0)
                {
                    cout << dictionary[j] << " " << v[i] << endl;; 
                    v[i] = dictionary[j];
                    
                }
            }
        }
        s.clear();
        for(i=0;i<v.size();i++)
        {
            s += v[i];
            s += ' ';
        }
        s.pop_back();
        return s;
    }
};