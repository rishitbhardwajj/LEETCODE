class Solution {
public:
    long long method1(vector<int>& piles, int hourly) {
        int n = piles.size();
        long long totalh = 0;

        for(int i = 0; i < n; i++) {
            totalh += ceil((double)piles[i] / (double)hourly);
        }

        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low <= high) {
            int mid = low + (high - low) / 2;

            long long target = method1(piles, mid);

            if(target <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};