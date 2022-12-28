class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int count = 0;
        int n = logs.size();
        int i;
        string p = "../";
        string q = "./";
        for(i=0;i<n;i++)
        {
            string x = logs[i];
            if (x == p)
            {
                if(count == 0)
                {
                    continue;
                }
                else
                {
                    count--;
                }
            }
            else if( x == q)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};