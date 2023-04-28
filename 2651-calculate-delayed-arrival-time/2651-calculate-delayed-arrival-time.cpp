class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
        if(arrivalTime + delayedTime < 24)
        {
            return arrivalTime + delayedTime;
        }
        int x = (arrivalTime + delayedTime) % 24;
        return x;
    }
};