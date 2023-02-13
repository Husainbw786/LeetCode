class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int i=0;
        int ans = 0;
        sort(people.begin(),people.end());
        int j = n-1;
        while(i<=j)
        {
            if(people[i] + people[j] <= limit)
            {
                i++;
                j--;
                ans++;
            }
            else
            {
                j--;
                ans++;
            }
        }
        return ans;
        
    }
};