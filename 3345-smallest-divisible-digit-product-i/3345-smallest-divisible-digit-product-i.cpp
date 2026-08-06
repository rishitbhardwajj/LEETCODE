class Solution {
public:
    int smallestNumber(int n, int t) {
        int s = n * t;

        for (int i = n; i <= s; i++) {
            int num = i;
            int prod = 1;

            while (num != 0) {
                prod *= (num % 10);
                num /= 10;
            }

            if (prod % t == 0)
                return i;
        }

        return -1;
    }
};