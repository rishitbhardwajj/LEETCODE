class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int result = arrivalTime+delayedTime;
        int n = 24;
        if(result >= 24){
            return result-n;
        }
        return result;
    }
};