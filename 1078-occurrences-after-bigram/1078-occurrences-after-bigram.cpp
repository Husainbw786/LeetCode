class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        int n = text.size();
        int i;
        string temp = "";
        vector<string>store;
        for(i=0;i<n;i++)
        {
            if(text[i] != ' ')
            {
                temp += text[i];
            }
            else
            {
                store.push_back(temp);
                temp = "";
            }
        }
        store.push_back(temp);
        temp = "";
        string temp2 = "";
        n = store.size();
        vector<string>ans;
        for(i=0;i<n-2;i++)
        {
             temp = store[i];
             temp2 = store[i+1];
    
            if(temp == first && temp2 == second)
            {
               ans.push_back(store[i+2]);
            }
        }
        return ans;
    }
};