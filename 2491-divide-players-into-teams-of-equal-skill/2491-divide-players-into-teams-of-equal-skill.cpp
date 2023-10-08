class Solution {
public:
    long long dividePlayers(vector<int>& skills) {
        
        int n = skills.size();
        sort(skills.begin(),skills.end());
        int i = 0;
        int j = n-1;
        long long int ans =0;
        int check = skills[0] + skills[n-1];

        while(i < j)
        {
            if(skills[i] + skills[j] == check)
            {
                
                long long int x = skills[i] * skills[j];
                ans += x;
                i++;
                j--;
            }
            else
            {
                return -1;
            }
        }
        return ans;
    }
};