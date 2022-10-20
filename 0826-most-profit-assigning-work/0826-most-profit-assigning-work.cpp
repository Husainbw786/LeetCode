class Solution {
public:
     int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> vec(difficulty.size());
        int i, j,size, maxProfit = 0,  maxProfitSoFar=0;
        size = difficulty.size();
        for(i=0; i<size; i++)
            vec[i] = {difficulty[i], profit[i]};
    
        sort(vec.begin(), vec.end());
        sort(worker.begin(), worker.end());
     
        auto it = vec.begin();
        for(i=0; i<worker.size(); i++)
        {
            while(it!=vec.end() && it->first <= worker[i])
            {
                maxProfitSoFar = max(maxProfitSoFar, it->second);
                it++;
            }
            maxProfit = maxProfit + maxProfitSoFar;
        }
        return maxProfit;
    }
};