class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
       
        int x = (arrivalTime + delayedTime) % 24;
        
        return x;
    }
};