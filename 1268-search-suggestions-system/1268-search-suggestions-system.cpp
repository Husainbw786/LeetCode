class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        int n = products.size();
        int len = searchWord.size();
        vector<vector<string>>ans;
        int i,j;
        string s = "";
        for(i=0;i<len;i++)
        {
            s += searchWord[i];
            priority_queue<string,vector<string>,greater<string>>pq;
            vector<string>temp;
            for(j=0;j<n;j++)
            {
               string s2 = products[j];
               int a = 0;
               while(a < s.size() && a < s2.size() && s2[a] == s[a])
               {
                   a++;
               }
               if(a == s.size())
               {
                   pq.push(s2);
               }
            }
            int x = 3;
            while(!pq.empty() && x--)
            {
                temp.push_back(pq.top());
                pq.pop();
            }
            ans.push_back(temp);
        }
        return ans;
    }
};