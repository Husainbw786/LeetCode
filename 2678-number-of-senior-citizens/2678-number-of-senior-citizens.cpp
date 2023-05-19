class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int count = 0;
        int n = details.size();
        int i;
        string temp = "";
        for(i=0;i<n;i++)
        {
            string x = details[i];
            temp = x[11];
            temp += x[12];
            int y = stoi(temp);
            if(y > 60)
            {
                count++;
            }
            temp.clear();
        }
        return count;
    }
};