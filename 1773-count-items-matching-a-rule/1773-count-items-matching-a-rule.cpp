class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
     
        int count = 0;
        int n = items.size();
        int m = items[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ruleKey == "type" && items[i][0] == ruleValue)
                {
                    count++;
                    break;
                }
                if(ruleKey == "color" && items[i][1] == ruleValue)
                {
                    count++;
                    break;
                }
                if(ruleKey == "name" && items[i][2] == ruleValue)
                {
                    count++;
                    break;
                }
                    
            }
        }
        return count;
    }
};