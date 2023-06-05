class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> result;
        
        // Calculate the number of jumbo burgers (X) using the equations
        int X = (tomatoSlices - 2 * cheeseSlices) / 2;
        
        // Calculate the number of small burgers (Y) using the equations
        int Y = cheeseSlices - X;
        
        // Check if the calculated values are valid
        if (X >= 0 && Y >= 0 && 4 * X + 2 * Y == tomatoSlices) {
            result.push_back(X);
            result.push_back(Y);
        }
        
        return result;
    }
};
