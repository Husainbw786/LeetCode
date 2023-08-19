class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        
        int total = numBottles;
        while(numBottles >= numExchange)
        {
            int newBottles = numBottles / numExchange;  // Calculate new bottles obtained from exchanging
            total += newBottles;  // Add new bottles to the total
            numBottles = newBottles + numBottles % numExchange;  // Update numBottles with new bottles and remaining bottles
        }
        return total;
        
    }
};