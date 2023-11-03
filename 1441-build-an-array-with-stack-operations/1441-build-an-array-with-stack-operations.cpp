class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int len = target.size();
        int i;
        vector<string>ans;
        if(len == n)
        {
            for(i=0;i<n;i++)
            {
                ans.push_back("Push");
            }
            return ans;
        }
        int count = 1;
        for(i=0;i<len;i++)
        {
            if(count == target[i])
            {
                ans.push_back("Push");
            }
            else
            {
                while(count != target[i])
                {
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    count++;
                }
                if(count == target[i])
                {
                    ans.push_back("Push");
                }
                
            }
            count++;
        }
        return ans;
    }
};