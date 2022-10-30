class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        int n = sentence.size();
        int i;
        vector<string>v;
        string temp;
        int ans = -1;
        for(i=0;i<n;i++)
        {
           if(sentence[i] != ' ')
           {
               temp +=sentence[i];
           }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
            string check = v[i];
            bool flag = true;
            for(int j=0;j<searchWord.size();j++)
            {
                if(check[j] == searchWord[j])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                ans = i;
                break;
            }
            
        }
        if(ans == -1)
        {
            return -1;
        }
        return ans + 1;
    }
};