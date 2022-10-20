class Solution {
public:
     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>>v(difficulty.size());
        int i, j;
        int size; 
        int maxProfit = 0, maxProfitSoFar=0;
        size = difficulty.size();
        for(i=0; i<size; i++)
        {
            v[i] = {difficulty[i], profit[i]}; 
        }
        sort(v.begin(),v.end());
        sort(worker.begin(), worker.end());
     
        auto it = v.begin();
        for(i=0;i<worker.size();i++)
        {
            while(it!=v.end() && it->first <= worker[i])
            {
                maxProfitSoFar = max(maxProfitSoFar, it->second);
                it++;
            }
            maxProfit = maxProfit + maxProfitSoFar;
        }
        return maxProfit;
    }
};