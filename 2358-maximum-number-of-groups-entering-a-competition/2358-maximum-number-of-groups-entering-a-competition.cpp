class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int n = grades.size();
        int i;
        sort(grades.begin(),grades.end());
        int count = 1;
        int ans = 0;
        while(n >= count)
        {
            int x = count;
            if(n >= x)
            {
                n -= x;
                ans++;
            }
            else
            {
                break;
            }
             count++;
        }
        return ans;
    }
};

  