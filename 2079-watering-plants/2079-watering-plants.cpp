class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int n = plants.size();
        int count = 0;
        int i;
        int x = capacity;
    
        for(i=0;i<n;i++)
        {
            if(plants[i] <= x)
            {
                x = x - plants[i];
                count++;
            }
            else
            {
                count += i;
                count += i+1;
                x = capacity - plants[i];
            }
        }
        return count;
    }
};