class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total_gas = 0;
        int total_cost = 0;
        int i;
        int n = gas.size();
        int curr_gas = 0;
        int start_point = 0;
        for(i=0;i<n;i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];
            
            curr_gas += gas[i] - cost[i];
            if(curr_gas < 0)
            {
                start_point = i+1;
                curr_gas = 0;
            }
        }
        if(total_gas < total_cost)
        {
            return -1;
        }
        return start_point;
    }
};