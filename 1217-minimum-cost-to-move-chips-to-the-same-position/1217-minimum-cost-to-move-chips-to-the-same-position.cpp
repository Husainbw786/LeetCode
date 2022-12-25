class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        int i;
        int even = 0;
        int odd = 0;
        for(i=0;i<n;i++)
        {
            if(position[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        return min(odd,even);
    }
};